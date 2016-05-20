/**
*/

#ifndef NET_FLOW_VECTOR_H
#define NET_FLOW_VECTOR_H

#include <assert.h>
#include <new>
#include "NetLevel.h"


namespace base {

	class netFlowVector {
		net_change_struct* data_;            // array of pointers
		unsigned capacity_;  // allocated
		unsigned size_;      // used
		enum { initialSize = 4 };


	public:

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
			capacity_ = n;
			// reserve more memory
			data_ = new net_change_struct[n];

			for (unsigned i = 0; i < capacity_; ++i) {
				*(data_ + i) = NET_CHANGE_DUMMY_VAL2;
			}
		}

		void expand(){
			reserve(capacity_ * 2);
		}
		
		void push_back(net_change_struct t) {
			assert(capacity_ != 0);

			if (size_ == capacity_) {
				throw NET_FLOW_VECTOR_IS_FULL;
			}

			*(data_ + size_)  = t;

			++size_;
		}

		
		net_change_struct get(unsigned i) const
		{
			assert(i < capacity_);
			return *(data_ + i);
		}

		net_change_struct get_last() const
		{
			if (0 == size_) {
				return NET_CHANGE_DUMMY_VAL2;
			}
			return get(size_ - 1);
		}
		
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
		}


	}; // class



} // namespace


#endif // NET_FLOW_VECTOR_H