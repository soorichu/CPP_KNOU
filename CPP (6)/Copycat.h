#ifndef COPYCAT_H_INCLUDED
#define COPYCAT_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

class Copycat{
  char *name;
public:
  Copycat(const char *n){
    name = new char[strlen(n)+1];
    strcpy(name, n);
  }

  Copycat(const Copycat &cc){
    name = new char[strlen(cc.name)+1]; //딥 카피 : 포인터를 복사하는 것이 아니라 새로 저장공간을 만들어 그곳에 자료를 저장하므로 에러 발생에 대처하기 쉽다. 
    strcpy(name, cc.name);
  }
  ~Copycat(){
    cout << name << " 소멸합니다."<< endl;
    delete [] name;
  }
  void whoRU() const{
    cout << "나는 " << name << "입니다."<< endl;
  }

};

#endif