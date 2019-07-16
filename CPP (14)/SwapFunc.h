#ifndef SWAPFUNC_H_INCLUDED
#define SWAPFUNC_H_INCLUDED

template <class ANY>
void swapValues(ANY &a, ANY &b){
  ANY temp;
  temp = a;
  a = b;
  b = temp;
}

#endif