#include <iostream>
#include "student.h"
using namespace std;

student::student(string roll_no, int age){
//    this->name = name;
    this->roll_no = roll_no;
    this->age = age;
}

void student::display(){
	cout << "A student with name " << roll_no << " " << age << endl;
}

//string student::getname(){
//    return this->name;
//}