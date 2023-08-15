  #include<string>
  #include<iostream>
  #include "student.h"
  using namespace std;
 /*   student::student(int student_id,std::string student_name,std::string student_address,std::string student_blood_grp,std::string student_date_of_birth)
    {
        this->student_id=student_id;
        this->student_name=student_name;
        this->student_address=student_address;
        this->student_blood_grp=student_address;
        this->student_date_of_birth=student_date_of_birth;
    
    }*/
    void student::set_student_record(int student_id,string student_name,string student_address,
                string student_blood_grp,string student_date_of_birth)
    {

        this->student_id=student_id;
        this->student_name=student_name;
        this->student_address=student_address;
        this->student_blood_grp=student_blood_grp;
        this->student_date_of_birth=student_date_of_birth;
      
    }
    void student::set_student_id(int id)
    {
       student_id=id;
    }
    int student::get_student_id()
    {
      return student_id;
    }
    void student::set_student_name(std::string name){
      student_name=name;
    }
     string student::get_student_name()
     {
        return student_name;
     }
       void student::set_student_address(std::string address){
        student_address=address;
    }
     string student::get_student_address()
     {
        return student_address;
     }
       void student::set_student_blood_grp(std::string blood_grp){
      student_blood_grp=blood_grp;
    }
     string student::get_student_blood_grp()
     {
        return student_blood_grp;
     }
       void student::set_student_date_of_birth(std::string date_of_birth){
      student_date_of_birth=date_of_birth;
    }
     string student::get_student_date_of_birth()
     {
        return student_date_of_birth;
     }
     void student::display_student_record()
     {
         cout<<"Student id:"<<this->student_id <<" "<<"Student Name:"<<this->student_name<<" "<<"Student_address:"<<this->student_address<<" "<<
         "Student Blood grp:"<<this->student_blood_grp<<" "<<"Student DOB:"<<this->student_date_of_birth<<endl;
     }