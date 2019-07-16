#include <iostream>
using namespace std;

class Employee{
  string company;
public:
  Employee(const string &s): company(s){}
  void printSchool() const{
    cout << company << endl;
  }
};