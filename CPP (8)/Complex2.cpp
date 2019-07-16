#include <iostream>
#include "Complex2.h"
using namespace std;
  
void Complex2::display() const{
  cout << "(" << r;
  if(i>0) cout << " + " << i <<"j";
  else if(i<0) cout << " - " << -i << "j" ;
  cout << ")";
}

Complex2 Complex2::operator *(const Complex2 &c){
  double real = r*c.r - i*c.i;
  double image = i*c.r + r*c.i;
  return Complex2(real, image);
}

Complex2 Complex2::operator / (const Complex2 &c){
  double div = c.r*c.r + c.i*c.i;
  Complex2 temp(c);
  return ((*this)*temp.conj())*(1/div);
}


ostream& operator << (ostream &os, const Complex2 &c){
  os << "(" << c.r ;
  if(c.i>0) os << " + " << c.i << "j";
  else if(c.i<0) os << " - " << -c.i << "j";
  os << ")";
  return os;
}//friend를 cpp에서 구현할 경우 'ClassName::'을 만들지 않는다.