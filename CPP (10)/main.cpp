#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Drvd1.h"
#include "Drvd2.h"

int main() {

  Person dudley("Dudley");
  Student harry("Harry", "Horgwart");
  dudley.print();
  cout << endl;
  harry.print();
  cout << endl;
  harry.Person::print();
  cout << endl;

  Drvd1 d1;  //public으로 상속 받음
  //d1.a = 1;  a가 private라 접근조차 안 됨
  //d1.b = 2;  b가 protected라 접근하면 안 됨.
  d1.c = 3;

  Drvd2 d2;
  //d2.a = 1; a는 private
  //d2.b = 2; b는 protected
  //d2.c = 3; c가 원래 public이었는데 protected로 상속받아 protected가 됨.
  
  return 0;
}