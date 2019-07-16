#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

class MyString{
  int len;
  int bufSize;
  char *buf;
public:
  MyString();
  MyString(const char* str);
  MyString(const MyString& mstr);
  ~MyString();
  int length() const;
  const MyString& operator = (const MyString &mstr);
  MyString operator + (const MyString &mstr) const;
  MyString operator += (const MyString &mstr);
  bool operator == (const MyString &mstr) const;
  bool operator > (const MyString &mstr) const;
  bool operator < (const MyString &mstr) const;
  char& operator[] (int i);
  const char& operator[] (int i) const; //상수인 경우에도 쓸 수 있게 만듦.
  friend std::ostream& operator << (std::ostream &os, const MyString &mstr);
  
};

inline std::ostream& operator<< (std::ostream &os, const MyString &mstr){
  os << mstr.buf;
  return os;
}

#endif