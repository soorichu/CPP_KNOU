#ifndef COUNTER_H_INCLUDED //만약 counter.h가 include하지 않았다면
#define COUNTER_H_INCLUDED //counter.h를 include한다. 
using namespace std;


class Counter{
//defult가 private이므로 따로 가시성 선언을 하지 않아도 된다.
  int value;

public: //외부에서 동작해야 하므로 public으로 선언
  Counter(): value(0){
    //value = 0;
    cout << "Counter START!"<<endl;
  }
  void reset(){
    value = 0;
    cout << "Counter RESETED" <<endl;
  }
  void count(){
    value++;
  }

  int getValue() const{
    return value;
  }

  ~Counter(){
   cout << "Counter END.." <<endl; 
  }


};

#endif