#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj{
  char *name;
  int id;
  static int nConstr;  //nObj에 사용해야 하므로 static
  static int nDestr;   //nObj에 사용해야 하므로 static

public:
  NamedObj(const char *s);
  ~NamedObj();
  void display() const{
    cout << "ID : " << id << " --> 이름 : " << name << endl;
  }
  static int nObj(){
    return nConstr - nDestr;
  }

};

#endif