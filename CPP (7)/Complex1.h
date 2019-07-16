#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex1{
private:
  double r, i;

public:
  Complex1(double r=0, double i=0):r(r), i(i){} //디폴트 매개변수 지정. 만약 매개변수 지정하지 않으면 자동으로 0으로 초기화.대박 중요
  Complex1 conj(){
    return Complex1(r, -i);
  }
  Complex1 add(const Complex1 &c){
    return Complex1(this->r+c.r, this->i+c.i);
  }
  Complex1 sub(const Complex1 &c){
    return Complex1(this->r-c.r, this->i-c.i);
  }
  Complex1 mul(const Complex1 &c);
  Complex1 div(const Complex1 &c);
  void display();
};

#endif