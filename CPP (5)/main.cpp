#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
  Counter ct;

  for(int i=0; i< 10; i++){
    ct.count();
    cout << ct.getValue() << endl;
  }

  ct.reset();


}