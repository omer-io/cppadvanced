#include "student.h"

int main(){
    student s1;
    s1.set_roll_no("20I-1037");
    s1.set_age(22);
    s1.set_cgpa(3.69);
    s1.set_subject_marks("TBW", 100);
    s1.set_subject_marks("ES", 90);
    s1.set_subject_marks("DB", 80);
    cout << "Roll No. " << s1.get_roll_no() << endl;
    cout << "Age: " << s1.get_age() << "\nCGPA: " << s1.get_cgpa() << endl;
    s1.print_all_marks();
    cout << "TBW Marks: " << s1.get_subject_marks("TBWx") << endl;
}