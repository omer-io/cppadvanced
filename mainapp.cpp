#include"student.h"
#include <map>
#include <vector>
#include <iostream>
using namespace std;

class whitelist
{
private:
  map<string, student *> student_record;
  vector<student> student_data_list;

public:
  void add_to_whitelist(string name, student s){
   student_data_list.push_back(s);
   student_record[name] = &s;
  }
  bool is_student_present(string sname){
      auto it = student_record.find(sname);
      if(it != student_record.end())
         return true;    
      else
         return false;
   }
  student* get_student_data(string sname){
      return student_record[sname];
  }
};

int main(){
   student s1("1234", 22);
   //s1.display();
   whitelist studentList;
   studentList.add_to_whitelist("Omer", s1);
   student *ptr = studentList.get_student_data("Omer");
   ptr->display();
   // if (studentList.is_student_present("Omer"))
   // {
   //    student *ptr;
   //    ptr = studentList.get_student_data("Omer");
   //    //ptr->display();
   //    // then call any public function of the student class using this pointer
   // }
   return 0;
}