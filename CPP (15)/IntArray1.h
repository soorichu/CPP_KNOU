#include <iostream>
using namespace std;

const int DefaultSize = 10;
class Array{
  int *pType;
  int size;
public:
  Array(int s = DefaultSize);
  // class BadIndex : public exception{
  //   public:
  //     int wrongIndex;
  //     BadIndex(int p) : wrongIndex(n), exception(){} 
  //     const char* what() const{
  //       return "Array Exception::" << endl;
  //     }
  // };

  virtual ~Array() {delete[] pType;}
  int& operator[] (int offset);
  int getsize() const {return size;}
  friend ostream& operator << (ostream&, Array&);
  class BadIndex{};
};