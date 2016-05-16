/** Simple container class as replacement for std::vector

It might be useful as a training example for novices, or if you have to avoid
the standard library for any reason, e.g. for link problems in an application
using mixed old and new C++ libraries.

A lot of stuff is missing, but you can extend it easily, if needed.

Copyright: Karsten Burger. Placed in the public domain by the author.

There is no guarantee of any kind.

Please report bugfixes via  http://sourceforge.net/projects/simplecstringclass.

*/

#ifndef NET_FLOW_VECTOR_H
#define NET_FLOW_VECTOR_H

#include <string.h> // realloc
#include <assert.h>
#include <new>
#include "NetLevel.h"


namespace base {


	//template <class net_change_struct>
	class netFlowVector {
		net_change_struct* data_;            // array of pointers
		unsigned capacity_;  // allocated
		unsigned size_;      // used
		enum { initialSize = 4 };
		/*const net_change_struct dummyValue = { {
			{ UNDEFINED, strong },
			(simtime_t)UINT64_MAX } };*/


	public:
		//typedef T* iterator;

		netFlowVector() :data_(0), capacity_(0), size_(0) {
			initial_reserve(initialSize);
		}

		netFlowVector(unsigned n) :data_(0), capacity_(0), size_(0) {
			initial_reserve(n);
		}

		netFlowVector(void * memoryBuffer, unsigned sizeInBytes) :data_(0), capacity_(0), size_(0) {
			data_ = (net_change_struct*)memoryBuffer;
			capacity_ = sizeInBytes / sizeof(net_change_struct);
		}

		~netFlowVector() {
			clear();
		}

		void clear() {
			delete[] data_;
			data_ = 0;
		}

		bool     empty()     const { return size_ == 0; }
		unsigned size()      const { return size_; }
		unsigned capacity()  const { return capacity_; }

		void reserve(unsigned n) {
			if (n > capacity_) {
				// reserve more memory
				net_change_struct* p = new net_change_struct[n];

				// copy old data
				unsigned i;
				for (i = 0; i < size_; ++i) {
					*(p + i) = *(data_ + i);  // in-place copy-construct
				}
				for (; i < n; ++i) {
					*(p + i) = NET_CHANGE_DUMMY_VAL2;  // in-place copy-construct
				}
				delete[] data_;
				data_ = p;
				capacity_ = n;
			}
		}


		void initial_reserve(unsigned n) {
			if (data_) {
				delete[] data_;
			}
			assert(n > 0);
			//if (n > 0) {
				capacity_ = n;
				// reserve more memory
				data_ = new net_change_struct[n];

				// copy old data
				for (unsigned i = 0; i < size_; ++i) {
					*(data_ + i) = NET_CHANGE_DUMMY_VAL2;
				}
			//}
		}

		void expand(){
			reserve(capacity_ * 2);
		}

		/*void resize(unsigned n) {
			if (n < size_) {
				// destroy last elements
				for (unsigned i = n; i < size_; ++i) {
					(data_ + i)->~net_change_struct(); // in-place destroy
				}
				size_ = n;
			}

			if (n > capacity_) {
				reserve(n);
			}

			// default-create new elements
			for (unsigned i = size_; i < n; ++i) {
				new(data_ + i) net_change_struct(); // in-place construct
			}
			size_ = n;
		}*/

		void push_back(net_change_struct t) {
			assert(capacity_ != 0);
			++size_;

			if (size_ == capacity_) {
				throw NET_FLOW_VECTOR_IS_FULL;
				//reserve(capacity_ * 2);
			}

			*(data_ + size_)  = t; // in-place construct
		}


		/*net_change_struct operator[](unsigned i)
		{
			return get(i);
		}*/


		net_change_struct get(unsigned i) const
		{
			assert(i < capacity_);
			return *(data_ + i);
			//else
			//T ret = out_of_range();
			//throw "OoR";
			//return out_of_range();// out_of_range();
								  //throw "OoR";
								  //throw "my_array: operator[]: index out of range";
		}

		net_change_struct get_last() const
		{
			return get(size_ - 1);
		}

		/*net_change_struct get_point(unsigned i) const
		{
			if (i<size_)
				return *(data_ + i);
			else
				throw "my_array: operator[]: index out of range";
		}*/


		/*const net_change_struct operator[](unsigned i) const
		{
			return get(i);
			/*if (i<size_)
				return *(data_ + i);
			else
				throw "my_array: operator[]: index out of range";
		}
*/
		//iterator begin() { return data_; }

		//iterator end() { return data_ + size_; }


		void remove(unsigned index)
		{
			if (index >= size_)
				throw "my_array: remove[]: index out of range";

			for (unsigned i = index; i < size_ - 1; i++) {
				data_[i] = data_[i + 1];
			}

			size_--;
			*(data_ + size_) = NET_CHANGE_DUMMY_VAL2;

		}


		void remove_last() {
			size_--;
			*(data_ + size_) = NET_CHANGE_DUMMY_VAL2;
			//remove(size_ - 1);
		}


	}; // class



} // namespace


#endif // NET_FLOW_VECTOR_H