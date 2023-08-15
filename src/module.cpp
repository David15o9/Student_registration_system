  #include<string>
  #include<iostream>
  #include "module.h"
  using namespace std;
  /*  Module::Module(int module_no,std::string module_name,double module_duration,int module_fees,std::string module_starting_date)
    {
        this->module_no=module_no;
        this->module_name=module_name;
        this->module_duration=module_duration;
        this->module_fees=module_fees;
        this->module_starting_date=module_starting_date;
    
    }*/
    void Module::set_module_details(int module_no,string module_name,double module_duration,int module_fees,string module_starting_date)
    {
         this->module_no=module_no;
        this->module_name=module_name;
        this->module_duration=module_duration;
        this->module_fees=module_fees;
        this->module_starting_date=module_starting_date;
    }
    void Module::set_module_no(int mod_no)
    {
          module_no=mod_no;
    }
    int Module::get_module_no()
    {
        return module_no;
    }
    void Module::set_module_name(std::string name){
      module_name=name;
    }
     string Module::get_module_name()
     {
        return this->module_name;
     }
       void Module::set_module_duration(double duration){
        module_duration=duration;
    }
     double Module::get_module_duration()
     {
        return module_duration;
     }
       void Module::set_module_fees(int fees){
         module_fees=fees;
    }
     int Module::get_module_fees()
     {
        return module_fees;
     }
       void Module::set_module_starting_date(std::string starting_date){
       module_starting_date=starting_date;
    }
     string Module::get_module_starting_date()
     {
        return module_starting_date;
     }
     void Module::display_all_module_details()
     {
         cout<<"Module No="<<this->module_no <<" "<<"Module Name="<<this->module_name<<" "<<"Module Duration="<<this->module_duration<<" "<<
         "Module Fees="<<this->module_fees<<" "<<"Module Starting Date"<<this->module_starting_date<<endl;
     }