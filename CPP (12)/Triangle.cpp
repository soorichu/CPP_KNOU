#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(const double v[3][2]){
  x1 = v[0][0];  y1 = v[0][1];
  x2 = v[1][0];  y2 = v[1][1];
  x3 = v[2][0];  y3 = v[2][1];
}

void Triangle::move(double dx, double dy){
  x1 += dx;  y1 += dy;
  x2 += dx;  y2 += dy;
  x3 += dx;  y3 += dy;
}

void Triangle::scale(double s){}

void Triangle::draw() const {
  cout << "삼각형 그리기 : "<< endl;
  cout << " (" << x1 << ", " << y1 << "), ";
  cout << " (" << x2 << ", " << y2 << "), ";
  cout << " (" << x3 << ", " << y3 << "), ";
  cout << attrib.getLineColor() << "으로 그리고 " << endl;
  cout << "  내부를 " << attrib.getFillcolor() << "으로 채운다." << endl;
}