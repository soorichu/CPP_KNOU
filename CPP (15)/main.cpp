#include <iostream>
#include "IntArray1.h"

using namespace std;

double hmean(double, double);
int getMonth();

int main() {
  cout << hmean(1, 2) << endl;
  try{
    cout << getMonth() << "월을 입력하셨습니다." << endl;
    cout << hmean(1, -1) << endl; //ERROR 비정상적인 데이터
  }catch (const char* s){
    cout << "에러!! 다른 수를 입력하세요 : " ;
    int x, y;
    cin >> x >> y;
    cout << hmean(x, y) << endl;
  }
  
}

double hmean(double a, double b){
  if(a == -b) throw "조화평균 계산할 수 없음!";
  return 2.0 * a * b / (a + b);
}
int getMonth(){
  int month;
  bool exit_flag = false;
  while(!exit_flag){
    cout << "월 입력 : ";
    cin >> month;
    if(month < 1 || month > 12)
      cout << "1~12 사이의 값을 입력" <<endl;
    else
      exit_flag = true;
  } 
  return month;

  Array arr(10);
  try{
    for (int i=0; i<=10; i++) arr[i] = i;
  }catch(Array::BadIndex e){
    cout << "인덱스 범위 오류 : " /*<< e.wrongIndex */<< endl;
  }
  cout << arr << endl;
  return 0;
}