#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here



private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudent;
public:

void Course();
~void Course();
void Course(string c,string cn,int m,int c,Student* students);
void addStudent();
void displayCourseInfo();

string getcourseCode();
void setcourseCode();
string getcourseName();
void setcourseName();
int getmaxStudents();
void setmaxStudents();


int getcurrentStudent();
void  setcurrentStudent();









#endif
