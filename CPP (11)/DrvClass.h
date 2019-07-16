#ifndef DRVCLASS_H_INCLUDED
#define DRVCLASS_H_INCLUDED
#include "BaseClass.h"

class DrvClass : public BaseClass{
  int *ptD;
public:
  DrvClass(int n1=10, int n2=10) : BaseClass(n1){
    ptD = new int[n2];
  }
  ~DrvClass() {delete [] ptD; }
};

#endif