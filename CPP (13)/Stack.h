#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef int STACK_ITEM; //int나 float
//만약 int형과 float형 스택이 모두 필요하다면? 아래와 같이 하면 중복이 많이 생긴다.
//class StackInt{ void push(INT_ITEM n);}
//class StackFloat{ void push(FLOAT_ITEM n);}
//-> 그래서 템플릿이 필요함!!

class Stack{
  enum {MAXSTACK = 20};
  int top;
  STACK_ITEM item[MAXSTACK];
public:
  Stack();
  bool empty();
  void initialize();
  void push(STACK_ITEM s);
  STACK_ITEM pop();
}


#endif