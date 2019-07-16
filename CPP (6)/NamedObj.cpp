#include <cstring>
#include "NamedObj.h"

NamedObj::NamedObj(const char *s){
  name = new char[strlen(s)+1];
  strcpy(name, s);
  id = ++ nConstr;
}
NamedObj::~NamedObj(){
  ++nDestr;
  delete [] name;
}
int NamedObj::nConstr = 0;  //static 멤버 변수는 선언은 클래스 안에서 하지만 초기화는 밖에서 해야만 한다!!! 중요하다!!! 
int NamedObj::nDestr = 0;
#include <cstring>
#include "NamedObj.h"

NamedObj::NamedObj(const char *s){
  name = new char[strlen(s)+1];
  strcpy(name, s);
  id = ++ nConstr;
}
NamedObj::~NamedObj(){
  ++nDestr;
  delete [] name;
}
int NamedObj::nConstr = 0;  //static 멤버 변수는 선언은 클래스 안에서 하지만 초기화는 밖에서 해야만 한다!!! 중요하다!!! 
int NamedObj::nDestr = 0;
