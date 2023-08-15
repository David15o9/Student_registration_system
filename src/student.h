#include<string>
using namespace std;
class student
{
    private:
    int student_id;

    string student_name;
    string student_address;
    string student_blood_grp;
    string student_date_of_birth;
    
    public:
  /*  student(int student_id,std::string student_name,std::string student_address,
                std::string student_blood_grp,std::string student_date_of_birth);*/
     void set_student_record(int student_id,std::string student_name,std::string student_address,
                std::string student_blood_grp,std::string student_date_of_birth);
     void set_student_id(int id);
     int get_student_id();
     void set_student_name(string name);
     string get_student_name();
     void set_student_address(string address);
     string get_student_address();
     void set_student_blood_grp(string blood_grp);
     string get_student_blood_grp();
     void set_student_date_of_birth(string date_of_birth);
     string get_student_date_of_birth();
     void display_student_record();
};