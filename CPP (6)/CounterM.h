#ifndef COUNTERM_H_INCLUDED
#define COUNTERM_H_INCLUDED 
#include <iostream>
using namespace std;

class CounterM{
  const int maxValue;
  int value;
public:
  CounterM(int mVal) : maxValue(mVal+1), value(0) {
    cout << "value=" <<value<< ", maxValue=" << maxValue << endl;
  } //매개변수가 있는 생성자를 만들었기 때문에 반드시 인스턴스를 만들 때 매개변수를 주어야 한다. CountM ct1(999);
  CounterM(const CounterM &c) : maxValue(c.maxValue), value(c.value){
    cout << "value=" <<value<< ", maxValue=" << maxValue << endl;
  } //복사 생성자. 만들지 않아도 알아서 만들어 준다.
  void reset(){value=0;}
  void count(){value++;}

};

#endif