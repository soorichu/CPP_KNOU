#include <iostream>
#include <string.h>
#include "SafeIntArray1.h"
#include "MyString.h"
using namespace std;

int main() {
  SafeIntArray1 a(10);
  cout << a.element(3);
  a.element(5) = 5;
  cout << ", " << a.element(5) << endl;  //참조이기 때문에 값을 변경할 수 있다.

  char str1[40] = "12345678";  //-> \0까지 공간 9개 차지하는데 사이즈는 8로 나온다.
  char str2[] = "12345678 "; //-> \0까지 공간 10개 차지하는데 사이즈는 9로 나온다.
//  char *str3 = "12345678"; //-> \0까지 공간 9개 차지

  int n1 = strlen(str1);
  cout << "strlen(str1[40]) = " << n1 << endl;
  n1 = strlen(str2);
  cout << "strlen(str2[]) = " << n1 << endl;
 // cout << "strlen(*str3) = " << strlen(str3) << endl;

  char str4[10] = "KOREAN";  // KOREAN\0
  strcpy(str4, "ME");        // ME\0REAN\0
  cout << str4 << endl;      // ME

  char str5[10] = "KOREAN";
  strcat(str5, "ME");        // MEREAN\0
  cout << str5 << endl;

  char cstr1[] = "C string";
  char *cstr2;
  MyString mstr1("MyString 객체");
  MyString mstr2;
  cstr2 = cstr1; //pointer 복사
  mstr2 = mstr1; //deep copy

  MyString str11("MyString class");
  MyString str12("Object oriented ");
  MyString str13;

  cout << str11 << endl;
  str13 = "Programming"; //const MyString& operator = (const MyString &mstr); 자동적 형 변환
  cout << str13 << "의 문자열 길이는 ";
  cout << str13.length() << endl;
  str11 = str12;
  cout << str11 << endl;
  str11 = str12 + str13;
  cout << str11 << endl;
}