#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>//file handling
#include "Period.h"
#include "PMS.h"
using namespace std;

class file
{
     public:
     void add_PMS(string str)
     {
          ofstream ofs("PMS.txt", ios::out|ios::app);
          ofs << str << "\n";
          cout<<"The data is saved successfully!"<< endl;
          ofs.close();

     }
     void read_PMS()
     {
          string str[256];
          string line;
          int j = 0;
          ifstream f("PMS.txt");
          int length;

          while(getline(f, line))
          {
               str[j]=line;
               j++;
          }
          f.close();
          length = j+1;
          cout<<"------------------------------------"<<endl;
          cout <<"List of PMS date"<<endl;
          cout<<"------------------------------------"<<endl;
           if (j==0)
           {
               cout<<"The list is empty"<<endl;
          }
          else
          {
               for(int i=0; i<length;i++)
               {
                    PMS *C = new PMS(str[i]);
                    cout<<"Date:"<<C->PMS::date_year_getter();
                    cout<<"/"<<C->PMS::date_month_getter();
                    cout<<"/"<<C->PMS::date_day_getter()<<endl;
                    cout<<"Body condition: "<<C->PMS::body_condi_getter()<<endl;
                    delete C;
               }
          }
     }
     void add_Period(string str)
     {
          ofstream ofs("Period.txt", ios::out|ios::app);
          ofs << str << "\n";
          cout<<"The data is saved successfully!"<< endl;
          ofs.close();
     }
      void read_Period()
     {
          string str[256];
          string line2;
          ifstream f("Period.txt");
          int body_condi_temp2 = 0;
          int j = 0;

          while(getline(f, line2))
          {
               str[j]=line2;
               j++;
          }
          f.close();

          cout <<"List of period date"<<endl;
          cout<<"------------------------------------"<<endl;
          if (j==0){
               cout<<"The list is empty"<<endl;
          }else{
          for(int i=0; i<j+1;i++)
          {
               Period *Cp = new Period(str[i]);
               cout<<"Period date:"<<Cp->Period::start_date_getter();
               cout<<"〜"<<Cp->Period::end_date_getter()<<endl;
               cout<<"Body condition: "<<Cp->Period::body_condi_getter()<<endl;
               delete Cp;
          }
          }
          cout<<"------------------------------------"<<endl;
     }

};