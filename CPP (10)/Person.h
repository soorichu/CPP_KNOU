#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person{
  string name;
public:
  Person(const string &n){
    name = n;
    cout << " Person 생성자" <<endl;  
  }
  ~Person(){
    cout << " Person 소멸자" <<endl;
  }
  void setName(string n){
    name = n;
  }
  const string getName() const{
    return name;
  }
  void print() const {cout << name;}

};

#endif