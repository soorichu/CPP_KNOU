#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "Person.h"
using namespace std;

class Student : public Person {
  string school;
public:
  Student(const string &n, const string &s) : Person(n){ //이거 알아두기
    cout << " Student 생성자" <<endl;
    school = s;
  }
  ~Student(){
    cout << " Student의 소멸자" <<endl;
  }
  void setSchool(string sch){
    school = sch;
  }
  string getSchool(){
    return school;
  }
  void print() const{
    Person::print();
    cout << " goes to " << school;
  }
} ;
#endif