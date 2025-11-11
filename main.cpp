#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================


class Person {
void Person :: Person(int i,string n) {
    name = n;
    id = i;
}
void Person::display(){
cout<< this.id<<","<<this.name<<endl;
}

}




// ==================== Student Class Implementation ====================

class Student : public Person {
void Student : Student( int i,string n,int y,string m){
Student(i,n);
yearLevel=y;
major=m;
}

void Student :display(){
cout<< this.id<<","<<this.name<<","<<this.yearLevel<<","<<this.major<<endl;}}

// ==================== Instructor Class Implementation ====================



  class Instructor : public Person {
    public:
    void Instructor::Intructor(int i,string n,string d,int e) {
        Person(i,n);
        department=d;
        Experience=e;
    }
    void Instructor::display() {
        cout<<id<<","<<name<< department<<","<<experienceYears<<endl;
  void Instructor:: setexperienceYears(int x){
      experienceYears=x;
void Instructor:: setdepartment(string y){
    department=y;
    }
    int Instructor:: getexperienceYears(){
          return experienceYears;
}
void Instructor:: getdepartment(){
          return department;}
  }

// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
