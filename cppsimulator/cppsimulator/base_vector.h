/** Simple container class as replacement for std::vector
 
  It might be useful as a training example for novices, or if you have to avoid
  the standard library for any reason, e.g. for link problems in an application
  using mixed old and new C++ libraries.

  A lot of stuff is missing, but you can extend it easily, if needed.

  Copyright: Karsten Burger. Placed in the public domain by the author.
 
  There is no guarantee of any kind.
 
  Please report bugfixes via  http://sourceforge.net/projects/simplecstringclass.

*/

#ifndef BASE_VECTOR_H
#define BASE_VECTOR_H

#include <string.h> // realloc
#include <assert.h>
#include <new>


namespace base {


template <class T>
class Vector {
  T* data_;            // array of pointers
  unsigned capacity_;  // allocated
  unsigned size_;      // used
  enum { initialSize=4 };
  T* errorRet;


public:
  typedef T* iterator;

  Vector(T errorRet = (T) 0) :data_(0), capacity_(0), size_(0){
    reserve(initialSize);
	this->errorRet = new T;
	*(this->errorRet) = errorRet;
  }

  Vector(unsigned n, T errorRet = (T)0) :data_(0), capacity_(0), size_(0) {
    resize(n);
	this->errorRet = new T;
	*(this->errorRet) = errorRet;
  }

  ~Vector() {
    clear();
  }

  void clear() {
    delete[] data_;
    data_ = 0;
  }

  bool     empty()     const { return size_==0; }
  unsigned size()      const { return size_; }
  unsigned capacity()  const { return capacity_; }

  void reserve( unsigned n) {
    if ( n > capacity_ ) {
      // reserve more memory
      T* p = new T[n];

      // copy old data
      for (unsigned i=0; i < size_; ++i) {
        new (p+i) T( *(data_ + i) );  // in-place copy-construct
      }
      delete[] data_;
      data_     = p;
      capacity_ = n;
    }
  }

  void resize(unsigned n) {
    if (n < size_) {
      // destroy last elements
      for (unsigned i=n; i < size_; ++i) {
        (data_ + i)->~T(); // in-place destroy
      }
      size_ = n;
    }

    if ( n > capacity_ ) {
      reserve( n );
    }

    // default-create new elements
    for (unsigned i=size_; i < n; ++i) {
      new(data_+i) T(); // in-place construct
    }
    size_ = n;
  }

  void push_back( const T& t ) {
    assert(capacity_ != 0);

    if (size_ == capacity_ ) {
      reserve( capacity_ * 2 );
    }

    new(data_+size_) T( t ); // in-place construct
    ++size_;
  }


  T& operator[](unsigned i)
  {
	  return get(i);
  }


  T& get(unsigned i) const
  {
	  if (i < size_)
		  return *(data_ + i);
	  //else
	  //T ret = out_of_range();
	  //throw "OoR";
	  return out_of_range();// out_of_range();
		  //throw "OoR";
	//throw "my_array: operator[]: index out of range";
  }

  T& get_last() const
  {
	  return get(size_ - 1);
  }

  T get_point(unsigned i) const 
  {
	  if (i<size_)
		  return *(data_ + i);
	  else
		  throw "my_array: operator[]: index out of range";
  }


  const T& operator[](unsigned i) const
  {
    if (i<size_)
      return *(data_+i);
    else
      throw "my_array: operator[]: index out of range";
  }

  iterator begin() { return data_; }

  iterator end()  { return data_ + size_; }


  void remove(unsigned index)
  {
	  if (index >= size_)
		  throw "my_array: remove[]: index out of range";

	  //delete &(data_[index]);

	  for (unsigned i = index; i < size_ - 1; i++) {
		  data_[i] = data_[i + 1];
	  }

	  size_--;

	  //if (size_ > 0 && size_ == capacity_ / 4)
		  //re(v, v->capacity / 2);
  }

  void remove_last() {
	  remove(size_ - 1);
  }

  T& out_of_range() const {
	  return *errorRet;
  }


}; // class



} // namespace


#endif // BASE_VECTOR_H