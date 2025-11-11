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
string Person::getName(){
    return name
int Person::getId(){
    return id;
void Person:: setName(string i){
    name=i;
void Person::setId(int i){
    id=i;
};




// ==================== Student Class Implementation ====================

class Student : public Person {
void Student : Student( int i,string n,int y,string m){
Student(i,n);
yearLevel=y;
major=m;
}

void Student :display(){
cout<< this.Person.getid()<<","<<this.Person.getname()<<","<<this.yearLevel<<","<<this.major<<endl;}};
  void Student:: setyearLevel(int x){
     yearLevel=x;
void Student:: setmajor(string y){
    major=y;
    }
    int Student:: getexperienceYears(){
          return experienceYears;
}
string Student:: getmajor(){
          return major;}

// ==================== Instructor Class Implementation ====================



  class Instructor : public Person {
    public:
    void Instructor::Intructor(int i,string n,string d,int e) {
        Person(i,n);
        department=d;
        Experience=e;
    }
    void Instructor::display() {
        cout<< this.Person.getid()<<","<<this.Person.getname()<< department<<","<<experienceYears<<endl;
  void Instructor:: setexperienceYears(int x){
      experienceYears=x;
void Instructor:: setdepartment(string y){
    department=y;
    }
    int Instructor:: getexperienceYears(){
          return experienceYears;
}
string Instructor:: getdepartment(){
          return department;}
  };

// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
