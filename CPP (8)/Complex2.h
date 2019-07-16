#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED

class Complex2{
  double r, i;

public:
  Complex2(double real=0, double image=0): r(real), i(image){}

  Complex2 conj(){
    return Complex2(r, -i);
  }

  double getReal() const {return r;}
  double getImage() const {return i;}

  Complex2 operator + (const Complex2 c) const{
    return Complex2(r+c.r, i+c.i);
  }

  // Complex2 operator + (double nr) const{ //안 해도 된다.ㅠㅠ
  //   return Complex2(r+nr, i);
  // }

  Complex2 operator - (){
    return Complex2(-r, -i);
  }

  Complex2 operator - (const Complex2 c) const{
    Complex2 temp(c);
    return (*this) + (-temp);
  }

  // Complex2 operator - (double nr) const{ //안 해도 자동변환
  //   return (*this) - Complex2(nr);
  // }

  Complex2 operator += (const Complex2 &c){
    r += c.r; i += c.i;
    return *this;
  }

  Complex2 operator -= (const Complex2 &c){
    r -= c.r; i -= c.i;
    return *this;
  }

  Complex2 operator * (const Complex2 &c);
  Complex2 operator / (const Complex2 &c);

  //참고로 cc1 + 10은 자동으로 되지만 10 + cc1은 안 되고 다중정의된 연산자를 friend로 선언해야 한다.
  friend Complex2 operator + (double rn, const Complex2 &c){
    return Complex2(c) + rn;
  }
  friend Complex2 operator - (double rn, const Complex2 &c){
    return Complex2(c) - rn;
  }

  friend Complex2 operator * (double rn, const Complex2 &c){
    return Complex2(c) * rn;
  }
  friend Complex2 operator / (double rn, const Complex2 &c){
    Complex2 temp(c);
    return rn/(temp.r*temp.r + temp.i*temp.i) * temp.conj();
  }

  void display() const;

  // cout << cc1;을 하고 싶음. 즉 스트링 출력을 원함
  friend std::ostream& operator << (std::ostream &os, const Complex2 &c);
};

#endif