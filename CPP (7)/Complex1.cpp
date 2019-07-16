#include <iostream>
#include "Complex1.h"
using namespace std;

Complex1 Complex1::mul(const Complex1 &c){
  double real, image;
  real = this->r * c.r - this->i * c.i;
  image = this->i * c.r + this->r * c.i;
  return Complex1(real, image);
}

Complex1 Complex1::div(const Complex1 &c){
  if(c.i==0 && c.r==0){
    cout <<"Do not divide" << endl;
    return Complex1(0, 0);
  }

  double divide;
  divide = c.r*c.r + c.i * c.i;
  Complex1 incp = c; //c가 const이므로 conj를 바로 할 수 없다. 따라서 임시 변수로 복사한다.
  incp = mul(incp.conj()); //중요!! 명심!! 

  return Complex1(incp.r/divide, incp.i/divide);
}

void Complex1::display(){
  char oper = this->i<0 ? '\0':'+';

  cout << "(" << this->r << oper << (this->i) << "j)";
}