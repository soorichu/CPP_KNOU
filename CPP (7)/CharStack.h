#ifndef CHARSTACK_H_INCLUDED
#define CHARSTACK_H_INCLUDED

class CharStack{
private:
  enum {size = 20};
  int top;
  char buf[size];
public:
  CharStack(){
    top = size;
  }
  bool chkEmpty(){
    return top == size;
  }
  bool chkFull() const{
    return !top; //0=false가 가장 위니까...
  }
  bool push(char ch);
  char pop();

};


#endif