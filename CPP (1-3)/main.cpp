#include <iostream>  //선행처리
#include <cmath>
#include "Circle2.h"

using namespace std;  //명칭공간
namespace myNSp1 {int n = 10;}//가
namespace myNSp2 {int n = 20;}//나
int n = 30;//다

struct CircleType{
  C2dType center;
  double radius;
};

double circleArea(CircleType c){
  return c.radius * c.radius * PI;
}

bool chkOverlap(CircleType c1, CircleType c2){
  double dx = c1.center.x - c2.center.x;
  double dy = c1.center.y - c2.center.y;
  double dCntr = sqrt(dx*dx + dy*dy);
  return dCntr < c1.radius + c2.radius;
}

void dispCircle(CircleType c){
  cout << "중심 : (" << c.center.x << ", " << c.center.y << ")";
  cout << ", 반경 : " << c.radius << endl;
}

int main() {
  int n = 40;//라

  cout << myNSp1::n << endl;//가
  cout << myNSp2::n << endl;//나
  cout << ::n << endl;//다
  cout << n << endl;//라

  int a;
  cout << "입력 ";
  cin >> a;
  cout << "출력 ";
  cout << a * 2 << endl;

  CircleType c1 = {{0, 0}, 10};
  CircleType c2 = {{30, 10}, 5};

  dispCircle(c1);
  dispCircle(c2);
  cout <<"c1과 c2는 ";
  if(chkOverlap(c1, c2))
    cout << "중첩됩니다."<<endl;
  else
    cout << "중첩되지 않습니다."<<endl;

    CircleClass cc1, cc2;
    cc1.init(0, 0, 10);
    cc2.init(30, 10, 5);
    
    cout << "원1 ";
    cc1.display();
    cout << "원1의 면적 : " << cc1.area() << endl;

    cout << "원2";
    cc2.display();
    cout << "원2의 면적 : " << cc2.area() << endl;

    if(cc1.chkOverlap(cc2))
      cout <<"두 원은 중첩됨"<<endl;
    else
      cout <<"두 원은 중첩되지 않음"<<endl;
    
    float fArray[4];
    int a2D[3][2];

    int b = 120;
    int *ptr;

    ptr = &b;
    
    cout << "ptr이 가리키는 값 : "<<*ptr <<endl;
    *ptr = 210;
    cout << "변수 b의 값 : "<< b << endl;


  return 0;
  
}