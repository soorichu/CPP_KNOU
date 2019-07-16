#ifndef SORTFUNC_H_INCLUDED
#define SORTFUNC_H_INCLUDED
#include <iostream>
#include "SwapFunc.h"
using namespace std;

template <class T> void sort(T& arr, int size){
  for (int i = 0; i< size-1; i++)
    for(int j = 0; j<size-i-1; j++)
      if(arr[j] > arr[j+1])
        swapValues(arr[j], arr[j+1]);
};

template <class T> void print(T& arr, int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " " ;
  }
  cout << endl;
}

#endif