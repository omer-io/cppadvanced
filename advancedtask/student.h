//#include <string>
#include <iostream>
#include <map>
using namespace std;

class student {
private:
    struct student_record {
        string roll_no;
        int age;
        float cgpa;
    } record;

    map<string, int> result;

public:
    student();
    ~student();
    int get_subject_marks(string subject);
    void set_subject_marks(string subject, int marks);
    void print_all_marks();
    string get_roll_no();
    void set_roll_no(string roll_no);
    int get_age();
    void set_age(int age);
    float get_cgpa();
    void set_cgpa(float cgpa);
};