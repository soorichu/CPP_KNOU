#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED

class Pencils{
private:
  int dozens, np;

public:
  Pencils(): dozens(0), np(0){};

  Pencils(int n){
    dozens = n/12; 
    np = n%12;
  }

  Pencils(int d, int n){
    dozens = d + n/12; 
    np = n%12;
  }

  Pencils operator ++();

  Pencils operator ++(int);

  void display() const;
};

#endif