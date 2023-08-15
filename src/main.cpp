#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include "student.h"
#include "module.h"
using namespace std;
int main()
{
       map<int,student> mp;
       map<int,Module> mp1;
       int t=1;
     while(t==1){  
     cout<<"# College Registration System #"<<endl;
     cout<<"1> Add Record"<<endl;
     cout<<"2> Update Record"<<endl;
     cout<<"3> Get any record"<<endl;
     cout<<"4> Get all record"<<endl;
     cout<<"5> Add Module"<<endl;
     cout<<"6> Get Any Module details"<<endl;
     cout<<"7> Get All Modules details"<<endl;
     cout<<"8> Update Module"<<endl;
     cout<<"0> Exit"<<endl;           
     cout<<" Enter your choice : "<<endl;
     int number;
     cin>>number;
     switch(number)
     {
        case 1: { 
                   cout<<"-----Enter Student details------"<<endl;
                   int Student_id;
                   cout<<"Enter Student id"<<endl;
                  
                   cin>>Student_id;
                   if(mp.find(Student_id)!= mp.end())
                   {
                        cout<<"THIS ID ALREADY EXIST"<<endl;
                     //   cout<<"PRESS 1 TO CONTINUE"<<endl;
                        break;
                   }
                   string student_nam;
                   cout<<"Enter Student name"<<endl;
                      cin>>student_nam;
                     //getline(cin,student_nam);
                   string student_address;
                   cout<<"Enter Student address"<<endl;
                  // getline(cin,student_address);
                  cin>>student_address;
                   string student_blood_grp;
                   cout<<"Enter Student blood_grp"<<endl;
                 //  getline(cin,student_blood_grp);
                   cin>>student_blood_grp;
                   string date_of_birth;
                   cout<<"Enter Student Date of Birth"<<endl;
                //   getline(cin,date_of_birth);
                  cin>>date_of_birth; 
                   student s1;
                   s1.set_student_record(Student_id,student_nam,student_address,student_blood_grp,date_of_birth);
                   mp.insert({s1.get_student_id(),s1});
                   cout<<"RECORD ADDED SUCCESSFULLY"<<endl;
                }
                break;
        case 2: {
                   cout<<"Enter Student id "<<endl;
                   int id1;
                   cin>>id1;
                   if(mp.find(id1)!= mp.end()){
                   cout<<"Which record you want Update"<<endl;
                   cout<<"1> Name"<<endl;
                   cout<<"2> Address"<<endl;
                   cout<<"3> blood Group"<<endl;
                   cout<<"4> Date of Birth"<<endl;
                   int number1;
                   cin>>number1;
                   switch(number1)
                   {
                        case 1:  {
                                   cout<<"Enter Name which you want to update"<<endl;
                                   string name;
                                  // getline(cin,name);
                                  cin>>name;
                                   mp[id1].set_student_name(name);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }
                                 break;
                        case 2: {
                                   cout<<"Enter Address which you want to update"<<endl;
                                   string address;
                                 //  getline(cin,address);
                                 cin>>address;
                                   mp[id1].set_student_address(address);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }  
                                 break;
                        case 3: {
                                   cout<<"Enter Bloodgrp which you want to update"<<endl;
                                   string bloodgrp;
                                  // getline(cin,bloodgrp);
                                  cin>>bloodgrp;
                                   mp[id1].set_student_blood_grp(bloodgrp);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }
                                break;
                        case 4: 
                                 {
                                   cout<<"Enter Date of Birth which you want to update"<<endl;
                                   string date_of_birth;
                                   //getline(cin,date_of_birth);
                                   cin>>date_of_birth;
                                   mp[id1].set_student_blood_grp(date_of_birth);
                                   cout<<"Record Updated Successfully"<<endl;
                                 } 
                                 break;
                        default : {
                                    cout<<"Wrong Input"<<endl;
                                    cout<<"Try again"<<endl;
                                  }                      
                                        
                   }
                   }
                   else
                   {
                        cout<<"NO ID FOUND"<<endl;
                   }
                }
                break;
        case 3: {
                   cout<<"Enter Student id "<<endl;
                   int id1;
                   cin>>id1;
                    if(mp.find(id1)!= mp.end()){
                   mp[id1].display_student_record();
                    }
                    else
                    {
                        cout<<"ID NOT FOUND"<<endl;
                    }  
                }
                break;
        case 4: {
                    cout<<"All Record of Student"<<endl;
                    map<int,student>:: iterator itr= mp.begin();
                    while(itr != mp.end())
                    {
                        itr->second.display_student_record();
                        itr++;
                    }
                }
                break;
        case 5: {
                   int module_no;
                   string moduleName;
                    double duration;
                    int fees;
                    string tentative_StartDate;
                   cout<<"------Enter Module Details------"<<endl;
                   
                   cout<<"Enter Module Number"<<endl;
                   cin>>module_no;
                  if(mp1.find(module_no)!= mp1.end())
                  {
                      cout<<"Module NO ALREADY EXIT"<<endl;
                      break;
                  }
                   cout<<"Enter Module Name"<<endl;
                  // getline(cin, moduleName);
                    cin>>moduleName;
                   cout<<"Enter Module Duration"<<endl;
                   cin>>duration;
                    
                   cout<<"Enter Module Fees"<<endl;
                   cin>> fees;
                   cout<<"Enter Module StartingDate"<<endl;
                  // getline(cin,tentative_StartDate);
                   cin>>tentative_StartDate;
                     Module m1;
                     m1.set_module_details(module_no,moduleName,duration,fees,tentative_StartDate);
                   mp1.insert({m1.get_module_no(),m1});
                   cout<<"RECORD ADDED SUCCESSFULLY"<<endl;
                }  
                break;
        case 6: {
                    cout<<"Enter Module No. "<<endl;
                   int no;
                   cin>>no;
                    if(mp1.find(no)!= mp1.end()){
                   mp1[no].display_all_module_details();
                    }
                    else
                    {
                        cout<<" NO MODULE NUMBER FOUND"<<endl;
                    }  
                }
                break;
        case 7: {
                     cout<<"All Details of Module"<<endl;
                    map<int,Module>:: iterator itr1= mp1.begin();
                    while(itr1 != mp1.end())
                    {
                        itr1->second.display_all_module_details();
                        itr1++;
                    }
                }
                break;
        case 8: {
                  cout<<"Enter Module no. "<<endl;
                   int id1;
                   cin>>id1;
                    if(mp1.find(id1)!= mp1.end()){
                   cout<<"Which record you want Update"<<endl;
                   cout<<"1> Name"<<endl;
                   cout<<"2> duration"<<endl;
                   cout<<"3> fees"<<endl;
                   cout<<"4> starting date"<<endl;
                   int number1;
                   cin>>number1;
                   switch(number1)
                   {
                        case 1:  {
                                   cout<<"Enter Name which you want to update"<<endl;
                                   string name;
                                  // getline(cin,name);
                                  cin>>name;
                                   mp1[id1].set_module_name(name);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }
                                 break;
                        case 2: {
                                   cout<<"Enter duration which you want to update"<<endl;
                                   double duration;
                                   cin>>duration;
                                   mp1[id1].set_module_duration(duration);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }  
                                 break;
                        case 3: {
                                   cout<<"Enter fees which you want to update"<<endl;
                                   int fees;
                                   cin>>fees;
                                   mp1[id1].set_module_fees(fees);
                                   cout<<"Record Updated Successfully"<<endl;
                                 }
                                break;
                        case 4: 
                                 {
                                   cout<<"Enter Starting Date which you want to update"<<endl;
                                   string date;
                                  // getline(cin,date);
                                  cin>>date;
                                   mp1[id1].set_module_starting_date(date);
                                   cout<<"Record Updated Successfully"<<endl;
                                 } 
                                 break;
                        default : {
                                    cout<<"Wrong Input"<<endl;
                                    cout<<"Try again"<<endl;
                                  }                      
                                        
                   }
                    }
                    else
                    {
                        cout<<"NO MODULE NUMBER FOUND"<<endl;
                    }
                }
                break;
        default: {
                 cout<<"Exit"<<endl;
                 } 
     }               
      cout<<"IF YOU WANT TO CONTINUE ENTER 1 ELSE 0"<<endl;
      cin>>t;                                                   
     }
}