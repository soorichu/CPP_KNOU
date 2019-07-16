#include <iostream>
#include "IntClass1.h"
#include "IntClass2.h"
#include "Pencils.h"
#include "Complex2.h"
using namespace std;

int main() {
  IntClass1 c1;
  IntClass2 c2;
  cout << ">>전위 표기" << endl;
  for(int i=0; i<10; i++)
    cout << (++c1).getValue() << endl;

  cout << ">>후기 표기" << endl;
  for(int i=0; i<10; i++)
    cout << (c2++).getValue() << endl;

  cout << "연필" <<endl;
  Pencils p1;
  Pencils p2(32);
  Pencils p3(4, 23);

  cout << "\np1 : "; p1.display();
  cout << ">>전위 표기" <<endl;
  for(int i=0; i<10; i++){
    (++p1).display();; 
  }
  cout << "\np1 : "; p1.display();
  cout << ">>후기 표기" << endl;
  for(int i=0; i<10; i++){
    (p1++).display(); 
  }

  cout << "\np2 : "; p2.display();
  cout << ">>전위 표기" <<endl;
  for(int i=0; i<10; i++){
    (++p2).display(); 
  }
  cout << "\np2 : "; p2.display();
  cout << ">>후기 표기" << endl;
  for(int i=0; i<10; i++){
    (p2++).display(); 
  }


  cout << "\np3 : "; p3.display();
  cout << ">>전위 표기" <<endl;
  for(int i=0; i<10; i++){
    (++p3).display(); 
  }
  cout << "\np3 : "; p3.display();
  cout << ">>후기 표기" << endl;
  for(int i=0; i<10; i++){
    (p3++).display(); 
  }

  cout << "\nComplex2"<<endl;

  Complex2 cc1;
  Complex2 cc2(10);
  Complex2 cc3(-4, 5);
  Complex2 cc4(7, -8);
  double rr = 10.0;

  cout << "cc1 = "; cc1.display(); cout <<", "; 
  cout << "cc2 = "; cc2.display(); cout <<", ";
  cout << "cc3 = "; cc3.display(); cout <<", ";
  cout << "cc4 = "; cc4.display(); cout << endl;

  cout << "cc3 + cc4" << " = "; (cc3+cc4).display(); 
  cout << endl;
  cout << "cc3 - cc4" << " = "; (cc3-cc4).display(); 
  cout << endl;

  cout << "cc3 + 10" << " = "; (cc3+10).display();
  cout << endl;
  cout << "cc3 - 10" << " = "; (cc3-10).display();
  cout << endl; 

  cout << "10 + cc4" << " = "; (10+cc4).display();
  cout << endl;
  cout << "10 - cc4" << " = "; (10-cc4).display();
  cout << endl; 

  cout << "cc3 += cc4, cc3 = " << (cc3+=cc4) << endl;
  cout << "cc3 -= cc4, cc3 = " << (cc3-=cc4) << endl;

  cout << "cc3 * cc4 = " << (cc3*cc4) << endl;
  cout << "cc3 / cc4 = " << (cc3/cc4) << endl;
  cout << "rr * cc3 = " << (rr*cc3) << endl;
  cout << "rr / cc3 = " << (rr/cc3) << endl;
  cout << "cc3 * rr = " << (cc3*rr) << endl;
  cout << "cc3 / rr = " << (cc3/rr) << endl;
}