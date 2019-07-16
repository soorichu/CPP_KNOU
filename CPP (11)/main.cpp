#include <iostream>
#include "Person.h"
#include "Student.h"
#include "BaseClass.h"
#include "DrvClass.h"
using namespace std;

/*
  매개변수에 붙은 const
  void func(const int& nNum);
*/

//(1) in-parameter - 값, 포인터, 참조 등의 데이터를 전달. 여기서 포인터나 참조를 전달만 하려 하는데 값이 변경되면 큰일나므로 반드시 const를 붙인다. 
//class에서 in-parameter 방식으로 값을 전달할 떄 복사 생성자가 호출되는 오버헤드를 줄이기 위해 보통 &를 붙인다. 이 경우도 당연 const 사용한다.
void InParam(int nNum){
  cout << "InParam " << nNum << endl;
}

//(2) out-parameter - 주소, 참조 등의 값을 변경!!
void OutParam(int* nNum){
  *nNum = 5;
  cout << "OutParam ";
}

//(3) in-parameter로 포인터나 참조를 '전달'만 하고 싶은데, 값 변경의 위험이 느껴질 경우 매개 변수 앞에 const를 붙여 상수화 시킴
void InConstParam(const int& nNum){
  cout << "InConstParam " << nNum << endl;
}

void PrintPerson(const Person * const p[], int n){
  for(int i=0; i<n; i++){
    p[i]->printing();
    cout << endl;
  }
}

int main() {

  cout << "### const ###" << endl;

  int nNum = 10;
  InParam(nNum);
  OutParam(&nNum);
  cout << nNum << endl;
  InConstParam(nNum);


/*포인터의 const에 대해 알아보자. */
  int value = 42;
//1. 포인터 자료형 앞에 const를 붙이면 포인터를 가리키는 곳이 불변
  const int* p1 = &value; 
  p1 = &value;
  // *p1 = 10; ERROR!! *p1은 포인터인데 이미 불변으로 설정함
//2. 포인터 자료형 뒤에 const를 붙이면 포인터 변수 자체가 불변이 된다.
  int* const p2 = &value; 
  // p2 = &value; ERROR!! p2는 변수인데 변수 자체를 불변으로 설정했으므로
  *p2 = 10;
//3. const가 포인터 자료형의 앞뒤에 붙으면 실체(포인터가 가리키는 곳)도 변수도 모두 불변이 된다.
  const int* const p = &value;
  //p = &value; 변수가 불변이므로 ERROR!!
  //*p = 10; 포인터가 불변이므로 ERROR!!
  
/*const 함수의 특징 
- 데이터를 수정하는 함수가 아닐 때, 개발자가 실수로 멤버변수의 값을 바꾸지 못하도록 하는 보안장치
  
  const void func();  //일반 함수에서는 자료형 앞에서 선언하고
  class className{
    void func() const;  //클래스의 멤버함수의 경우 끝에 선언한다.
  }

*/

  cout << endl << "### 상속 ###" << endl;

  Person ps1("Lucy");
  Student ps2("Peter", "Narnia");

  cout << endl << "### Pointer 상속 ###"<<endl;
  
  Person* pPrsn1;
  Person* pPrsn2;
  Person dudley("Dudley");
  Student harry("Harry", "Hogwarts");
  Student *pStdnt;
  pPrsn1 = &dudley;
  pPrsn2 = &harry;
  //pStdnt = &dudley; //Error!! pStdnt는 Student 클래스의 포인터 이므로 dudley의 포인터를 가리킬 수 없다. 

  Student ron("Ron", "Griffindor");
  //객체 포인터 배열 만들기

  cout << endl << "### 객체 포인터 배열 ###" <<endl;
  Person *pPerson[3] = {&dudley, &harry, &ron}; 
  //기초클래스의 포인터이기 때문에 파생클래스인 Student 객체까지 가리킬 수 있다!! 와우!
  PrintPerson(pPerson, 3); //Person::printing이 작동하므로 학교는 출력이 안 된다.

  cout << endl << "### 정적연결 ###" << endl;
  Person *pPt = &harry;
  Student *sPt = &ron;

  pPt->printing(); cout << endl; //Person::printing() 정적연결
  sPt->printing(); 
  ((Student*)pPt)->printing(); //Student::printing()호출. 근데 만약 *pPt가 Person을 참조했다면 에러가 난다. 위험한 방법임

  //가상함수
  cout << "### 동적연결(가상함수) ###"<< endl;
  pPt->print(); 
  sPt->print();

  BaseClass *pB1 = new BaseClass(5);
  BaseClass *pB2 = new DrvClass(10, 15);
  delete pB1; //기초클래스의 소멸자 동작
  delete pB2; //기초클래스의 소멸자만 동작(선언할 때 기초클래스의 포인터를 가리키게 만들어 놓아서..)

  cout << endl<< "### 업/다운 캐스팅 ###" << endl;
  Person *pPrsn3 = new Person("Dudley");
  Student *pStdnt3 = new Student("Harry", "Hogwarts");
  Person *pPrsn4 = pStdnt3;  //업 캐스팅
  //Student *Stdnt4 = pPrsn3;  //다운 캐스팅 - 에러!! 
  //다운캐스팅을 위해서는 static_cast를 사용해야 한다.
  Student *pStdnt4 = static_cast<Student*>(pPrsn3);
  cout << "다운캐스팅 안됨 " << pStdnt4->getSchool(); //pPrsn3가 Person 객체를 가리키므로 다운 캐스팅을 해도 올바른 처리가 이루어지지 않는다. 
  //이 경우 dinamic_cast를 이용하면 잘못된 처리의 경우 null을 반환하여 에러가 발생하지 않는다. dinamic_cast를 사용하려면 클래스 선언문에 가상함수를 포함해야 한다.
  Student *pStdnt5 = dynamic_cast<Student*>(pPrsn4); //nPrsn4는 Student 객체를 가리키므로 다운 캐스팅에 대해 올바른 처리가 이루어짐. 
  if(pStdnt5)
    cout << endl<< "다운캐스팅 " << pStdnt5->getSchool() << endl;

  cout << endl; 

}