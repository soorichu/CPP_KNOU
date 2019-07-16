#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch){
  if(chkFull()){
    cout << "Stack is Full" << endl;
    return false;
  }
  buf[--top] = ch;
  return true;
}

char CharStack::pop(){
  if(chkFull()){
    cout << "Stack is Empty" << endl;
    return 0;
  }
  return buf[top++];
}