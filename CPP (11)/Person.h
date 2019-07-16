#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person{
  string name;
public:
  Person(const string &n){  //참조로 전달된 매개변수는 모두 const
    name = n;
    cout << name << " Person Start.." << endl;
  }
  ~Person(){
    cout << name << " Person End.." << endl;
  }
  void setName(const string &n){
    name = n;
  }
  const string getName() const{
    return name;
  }
  void printing() const{
    cout << name;
  }
  virtual void print() const{
    cout << name;
  }

};

#endif