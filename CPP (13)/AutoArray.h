#ifndef AUTOARRAY_H_INCLUDED
#define AUTOARRAY_H_INCLUDED

template <typename T>

class AutoArray{
  T* _ptr;
public:
  AutoArray(T* ptr){
    _ptr = ptr;
  }
  ~AutoArray(){
    delete[] _ptr;
  }
  T& operator[] (int index){
    return _ptr[index];
  }
};

#endif