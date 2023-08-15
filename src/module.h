#include<string>
using namespace std;
class Module
{
    private:
    int module_no;
    string module_name;
    double module_duration;
    int module_fees;
    string module_starting_date;
    
    public:
  /*  Module(int module_no,string module_name,double module_duration,int module_fees,string module_starting_date);*/
     void set_module_details(int module_no,string module_name,double module_duration,int module_fees,string module_starting_date);
     void set_module_no(int module_no);
     int get_module_no();
     void set_module_name(string module_name);
     string get_module_name();
     void set_module_duration(double module_duration);
     double get_module_duration();
     void set_module_fees(int module_fees);
     int get_module_fees();
     void set_module_starting_date(string module_starting_date);
     string get_module_starting_date();
     void display_all_module_details();
};