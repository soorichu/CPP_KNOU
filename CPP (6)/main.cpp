#include <iostream>
#include <cstring>
#include "Person.h"
#include "CounterM.h"
#include "Copycat.h"
#include "NamedObj.h"
using namespace std;

void f(){
  NamedObj x("Third");
  x.display();
}

int main() {

  Person *p1 = new Person("이철수", "서울시 종로구");
  Person *p2 = new Person("박은미", "강원도 동해시");
  p1->print();
  p2->print();
  cout << endl <<"주소 변경 : ";
  p2->chAddr("대전시 서구");
  p2->print();
  delete p1;
  delete p2;

  CounterM cnt4(99);
  CounterM cnt5(cnt4);
  CounterM cnt6 = cnt4;

  Copycat cc1("홍길동");
  Copycat cc2(cc1);

  cc1.whoRU();
  cc2.whoRU();

  cc1.~Copycat();
  cc2.~Copycat();

  cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
  NamedObj a("First");
  NamedObj b("Second");
  a.display();
  b.display();

  f();
  NamedObj c("Forth");
  c.display();
  cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;

  return 0;
}