#include <iostream>
#include "CharStack.h"
#include "Complex1.h"
using namespace std;

int main() {
  CharStack chStack;
  char str[20];

  cout << "영어 단어 입력 : ";
  cin >> str;

  char* pt = str;
  while(*pt){
    chStack.push(*(pt++));
  }
  cout << "역순 단어 출력 : ";
  while(!chStack.chkEmpty())
    cout << chStack.pop();
  cout << endl;

  cout << "복소수" << endl;
  Complex1 cp1(3, -4);
  Complex1 cp2(-2);

  cout << "Conjugate"; cp1.display(); cout << " = ";
  cp1.conj().display(); cout << endl;
  cp1.display(); cout << "+"; cp2.display(); cout<<" = "; 
  cp1.add(cp2).display(); cout << endl;
  cp1.display(); cout << "-"; cp2.display(); cout<<" = "; 
  cp1.sub(cp2).display(); cout << endl;
  cp1.display(); cout << "*"; cp2.display(); cout<<" = "; 
  cp1.mul(cp2).display(); cout << endl;
  cp1.display(); cout << "/"; cp2.display(); cout<<" = "; 
  cp1.div(cp2).display(); cout << endl;


  return 0;

}