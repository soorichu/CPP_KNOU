#ifndef SAFEINTARRAY_H_INCLUDED
#define SAFEINTARRAY_H_INCLUDED

#include <iostream>
using namespace std;

class SafeIntArray1{
  int limit;
  int *arr;
public:
  SafeIntArray1(int nofEl) : limit(nofEl){
    arr = new int[nofEl];
  }
  ~SafeIntArray1(){
    delete [] arr;
  }
  int& element(int i){  //리턴값이 참조이기 때문에 값을 바꿀 수 있다.
    if(i<0 || i>=limit){
      cout << "참자가 범위를 벗어나 프로그램을 종료합니다.";
      exit(1);
    }
    return arr[i]; //i번째 원소의 참조 반환
  }
};

#endif