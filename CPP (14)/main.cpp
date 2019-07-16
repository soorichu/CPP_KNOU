#include <iostream>
#include "SwapFunc.h"
#include "SortFunc.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int x = 10, y = 20;
  cout << "x = " << x << ", y = " << y << endl;
  swapValues(x, y);
  cout << "값 교환 후 --> ";
  cout << "x = " << x << ", y = " << y << endl;

  double p = 1.12, q = 2.43;
  cout << "p = " << p << ", q = " << q << endl;
  swapValues(p, q);
  cout << "값 교환 후 --> ";
  cout << "p = " << p << ", q = " << q << endl; 

  double arrd[10] = {11.4, 34.13, 3.1, -3.1, 0.1, 
                    0.023,  43.1,  10, 90.1, 34};
  int arri[10] = { 11, 34, 3, -3, 1, 0, 43, 10, 90, 33};
  sort(arrd, 10); print(arrd, 10);
  sort(arri, 10); print(arri, 10);

  vector<int> intVec(5);
  for(int i=0; i< intVec.size(); i++) intVec[i] = i+1;
  cout << "벡터의 논리적 크기 : " << intVec.size() << endl;
  cout << "벡터의 물리적 크기 : " << intVec.capacity() << endl;
  cout << "저장된 데이터 : ";
  for (int i=0; i< intVec.size(); i++) cout << intVec[i] << " ";
  cout << endl;
  // C++11부터는 (1)+(2) : auto it = intVec.begin(); 로 간단하게 이용할 수 있다. 
  vector<int>::iterator it; //(1) 
  cout << "저장된 데이터 : ";
  for(it = intVec.begin(); it<intVec.end(); it++) cout << *it << " ";
  cout << endl;
  it = intVec.begin(); //(2) 
  cout << "3번째 데이터 : ";
  cout << *(it+2) << endl;

  srand((unsigned) time(0)); //난수 발생기 초기화
  vector<int> iv1(5);
  cout << "벡터1에 저장된 값 : ";
  for (it = iv1.begin(); it < iv1.end(); it++) {
    *it = rand() % 100; //난수 발생
    cout << *it << " ";
  }
  cout << endl;
  sort(iv1.begin(), iv1.end());
  cout << "정렬된 벡터1에 저장된 값 : ";
  for (it = iv1.begin(); it < iv1.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  vector<int> iv2(5);
  cout << "벡터2에 저장된 값 : ";
  for (it = iv2.begin(); it < iv2.end(); it++) {
    *it = rand() % 100; //난수 발생
    cout << *it << " ";
  }
  cout << endl;
  sort(iv2.begin(), iv2.end());
  cout << "정렬된 벡터2에 저장된 값 : ";
  for (it = iv2.begin(); it < iv2.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  
  vector<int> iv3(iv1.size()+iv2.size());
  merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
  cout << "벡터1과 벡터2를 합병한 결과 : ";
  for(it=iv3.begin(); it<iv3.end(); it++){
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}