#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person{
  string school;
public:
  Student(const string &n, const string &s): Person(n){
    school = s;
    cout << n << " in " << s << " Student Start.." << endl;
  }
  ~Student(){
    cout << getName() << " in " << school << " Student End.." << endl;
    // name은 기초클래스 Person에서 private였으므로 파생클래스 Student에서 접근이 불가능하다. 따라서 getName()을 이용한다. 
  }
  void setSchool(const string &s){
    school = s;
  }
  const string getSchool() const{
    return school;
  }
  void printing() const{
    Person::printing();
    cout << " goes to " << school << endl;
  }
  void print() const{
    Person::print();
    cout << " goes to " << school << endl;
  }

};

#endif