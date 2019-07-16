#ifndef BASEC_H_INCLUDED
#define BASEC_H_INCLUDED

class BaseC{
  int a;
protected:
  int b;
public:
  int c;
  int geta() const{return a;}
  void set(int x, int y, int z){ a=x; b=y; c=z;}
};

#endif