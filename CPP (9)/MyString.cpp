#include <iostream>
#include <string.h>
#include "MyString.h"

MyString::MyString() : len(0), bufSize(0){
  buf = new char[len+1];
  buf[0] = '\0';
}
MyString::MyString(const char* str){
  len = bufSize = strlen(str);
  buf = new char[len+1];
  strcpy(buf, str);
}
MyString::MyString(const MyString& mstr) : len(mstr.len), bufSize(mstr.len){
  buf = new char[len+1];
  strcpy(buf, mstr.buf);
}
MyString::~MyString(){
  delete [] buf;
}
int MyString::length() const{
  return len;
}
const MyString& MyString::operator = (const MyString &mstr){
  if(bufSize < mstr.len){
    delete[] buf;
    len = bufSize = mstr.len;
    buf = new char[len+1];
  }else{
    len = mstr.len;
  }
  strcpy(buf, mstr.buf);
  return *this;
}
MyString MyString::operator + (const MyString &mstr) const{
  char *tStr = new char[len+ mstr.len +1];
  strcpy(tStr, buf);
  strcpy(tStr+len, mstr.buf);
  MyString tmStr(tStr);
  delete [] tStr;
  return tmStr;
}
MyString MyString::operator += (const MyString &mstr){
  if(bufSize < len+mstr.len){
    bufSize = len += mstr.len;
    char* tbuf = new char[len+1];
    strcpy(tbuf, buf);
    delete [] buf;
    buf = tbuf;
  }
  strcat(buf, mstr.buf);
  return *this;
}
bool MyString::operator == (const MyString &mstr) const{
  return !strcmp(buf, mstr.buf);
}
bool MyString::operator > (const MyString &mstr) const{
  return strcmp(buf, mstr.buf) > 0;
}
bool MyString::operator < (const MyString &mstr) const{
  return strcmp(buf, mstr.buf) < 0;
}
char& MyString::operator[] (int i){
  return buf[i];
}
const char& MyString::operator[] (int i) const{
  return buf[i];
} //상수인 경우에도 쓸 수 있게 만듦.