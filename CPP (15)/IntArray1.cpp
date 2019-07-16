#include <iostream>
#include <string.h>
#include "IntArray1.h"

using namespace std;

Array::Array(int s) : size(s){
  pType = new int[s];
  memset(pType, 0, sizeof(int)*s);
}

int& Array:: operator[] (int offset){
  if(offset<0 || offset>=size) throw BadIndex(/*offset*/);
  return pType[offset];
}
