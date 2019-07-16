#include <iostream>
using namespace std;

struct SalesRec{
  char pID[10];
  int dYear, dMonth, dDate;
  char deliverAddr[40];
};

float FahrToC(float);
void SwapValues(int &, int &);
void PrSalesRec(const SalesRec &);
void PrString(const string *, int tabLen=8);

int main(){
  float fTemp, cTemp;
  
  cout <<"##### 실매개변수와 형식매개변수 ####"<<endl;
  cout << "화씨 온도 : ";
  cin >> fTemp;
  cTemp = FahrToC(fTemp);  //실 매개변수
  cout << "---> 섭씨 온도 : " << cTemp << endl;

  cout <<"##### 참조 호출 ####" <<endl;
  int a, b;
  cout << "두 수를 입력 : ";
  cin >> a >> b;
  if(a<b) SwapValues(a, b);
  cout << a << " >= " << b << endl;

  cout <<"##### 실매개변수 값 수정 방지를 위한 const 지정 #####"<<endl;
  SalesRec slr = {"ID1119033", 2019, 6, 27, "충청북도 흥덕구 강래면"};
  PrSalesRec(slr);

  cout <<"#### 디폴트 인수 사용 ####"<< endl;
  string str = "a\tbcd\tefghijk\tlmn";

  PrString(&str);
  PrString(&str, 4);
  
  return 0;
}

float FahrToC(float fahr){ //형식 매개변수
  return (fahr-32)*5/9;
}

inline void SwapValues(int &x, int &y){
  int temp = x;
  x = y;
  y = temp;
}

void PrSalesRec(const SalesRec &srec){
  // srec.pID = "123456"; 수정이 불가함. 
  cout << "품목코드 : " << srec.pID << endl;
  cout << "배달일자 : " << srec.dYear <<"년 ";
  cout << srec.dMonth <<"월 ";
  cout << srec.dDate << "일 " << endl;
  cout << "배달주소 : " << srec.deliverAddr << endl;
}
//안된다....ㅠㅠ
void PrString(const string *str, int tabLen){
  int col=0, n;
  while(*str!=""){
    if(*str == "\t"){
      n = (col/tabLen + 1) *tabLen;
      for(;col<n; col++){
        cout << ' ';
      }
    }else{
      cout << *str; col++;
    }
    str++;
  }
  cout << endl;
}

