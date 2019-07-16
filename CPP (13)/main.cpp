#include <iostream>
#include "AutoArray.h"
#include "Stack2.h"
// #include "List.h"
using namespace std;

int main(){
  AutoArray<float> arrf(new float [100]);
  arrf[0] = 100.0f;

  cout << arrf[0] << endl;

  AutoArray<int> arri(new int [100]);
  arri[0] = 88;
  cout << arri[0] << endl; 

  Stack<char> sc(100);
  Stack<int> si(50);

  sc.push('a');
  sc.push('b');
  cout << "CHAR STACK: " << sc.pop() << ", ";
  cout << sc.pop() << endl;

  si.push(5);
  si.push(10);
  cout << "INT STACK: " << si.pop() << ", " ;
  cout << si.pop() << endl;

  // List<int> iList;
  // for (int i=10; i>0; i--)
  //   iList.addFront(i);
  // if(!iList.chkEmpty()){
  //   do{
  //     cout << iList.getValue() << " ";
  //   }while(iList.moveNext());
  // }
  // cout << endl;

  return 0;
}