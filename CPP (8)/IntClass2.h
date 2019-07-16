#ifndef INTCLASS2_H_INCLUDED
#define INTCLASS2_H_INCLUDED

class IntClass2{
  int a;
public:
  IntClass2(int n=0) : a(n) {}
  IntClass2 operator ++ (int){ //후위 표기 ++ 연산자 다중정의
    IntClass2 tmp(*this);
    ++a;
    return tmp; //변하기 이전의 값을 리턴!!!
  }
  int getValue() const {return a;}
};

#endif