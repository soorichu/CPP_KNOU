#include "BaseC.h"
#include <iostream>

class Drvd2 : protected BaseC{
public:
  int sum() const{
    return geta()+b+c;
  }
  void printbc() const{
    cout << b<< " " <<c;
  }
}