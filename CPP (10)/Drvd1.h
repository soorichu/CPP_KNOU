#include "BaseC.h"

class Drvd1 : public BaseC{
  public:
  int sum() const{
    //return a + b + c; a 가 private라서 파생클래스에서 접근이 불가함.
    return geta() + b + c;
  }
  void printbc() const{
    cout << b << ' ' << c;
  }
}