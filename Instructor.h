#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here


private :
string department;
int experienceYears;

public:
void Instructor();
~  Instructor();


void Instructor(int  i , string n,string d,int e);

void display();


void getDepartment();
void getExperience();






#endif
