#ifndef BASECLASS_H_INCLUDED
#define BASECLASS_H_INCLUDED

class BaseClass{
  int *ptB;
public:
  BaseClass(int n=10){
    ptB = new int[n];
  }
  ~BaseClass(){
    delete [] ptB;
  }
  
};

#endif