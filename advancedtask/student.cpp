#include "student.h"

student::student(){
    cout << "Constructor called.\n";
}
student::~student(){
    cout << "Destructor called.\n";
}
int student::get_subject_marks(string subject){
    map<string, int>::iterator it = result.begin();
    while(it != result.end()){
        if(it->first == subject)
            return result[subject];
        ++it;
    }
    cout << "Result not found!\n";
    return -1;        
}
void student::set_subject_marks(string subject, int marks){
    result[subject] = marks;
}
void student::print_all_marks(){
    map<string, int>::iterator it = result.begin();
    while(it != result.end()){
        cout << "Subject: " << it->first << endl;
        cout << "Marks: " << it->second << endl;
        ++it;
    }
}
string student::get_roll_no(){
    return record.roll_no;
}
void student::set_roll_no(string roll_no){
    record.roll_no = roll_no;
}    
int student::get_age(){
    return record.age;
}
void student::set_age(int age){
    record.age = age;
}
float student::get_cgpa(){
    return record.cgpa;
}
void student::set_cgpa(float cgpa){
    record.cgpa = cgpa;
}
