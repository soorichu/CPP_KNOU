#include "Student.h"
#include "Employee.h"

class Parttime : public Student, public Employee{// 다중상속
public:
  parttime(const string &s, const string &c) : Student(s), Employee(c){}
}