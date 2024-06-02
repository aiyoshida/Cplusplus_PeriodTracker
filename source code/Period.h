#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Period
{
     private:
          string Period_start;
          string Period_end;
          string str_body_condi;
          string all;
          int start_date_year;
          int start_date_month;
          int start_date_day;
          int end_date_year;
          int end_date_month;
          int end_date_day;
          int body_condi;
     
     public:
          Period()
          {
               cout<<"Please enter the start date of period [YYYY/MM/DD]"<<endl;
               cin>> Period_start;
               cout<<"Please enter the end date of period[YYYY/MM/DD]"<<endl;
               cin>> Period_end;
               cout <<"Please enter the body condition [0(Good)-9(Bad)]"<<endl;
               cin>> str_body_condi;

               all += Period_start;
               all += Period_end;
               all += str_body_condi;

               string s_temp_year = Period_start.substr(0,4);
               string s_temp_month = Period_start.substr(5, 2);
               string s_temp_day = Period_start.substr(8, 2);

               start_date_year= stoi(s_temp_year);
               start_date_month = stoi(s_temp_month);
               start_date_day = stoi(s_temp_day);

               string e_temp_year = Period_end.substr(0,4);
               string e_temp_month = Period_end.substr(5, 2);
               string e_temp_day = Period_end.substr(8, 2);

               end_date_year= stoi(e_temp_year);
               end_date_month = stoi(e_temp_month);
               end_date_day = stoi(e_temp_day);
               body_condi = stoi(str_body_condi);
          }
          Period(string str)
          {
               string body_condi_temp;
               all = str;
               Period_start = str.substr(0,10);
               Period_end = str.substr(10,10);
               body_condi_temp = str.substr(20,1);

               string s_temp_year = Period_start.substr(0,4);
               string s_temp_month = Period_start.substr(5,2);
               string s_temp_day = Period_start.substr(8,2);

               start_date_year= stoi(s_temp_year);
               start_date_month = stoi(s_temp_month);
               start_date_day = stoi(s_temp_day);
               body_condi = stoi(body_condi_temp);

               string e_temp_year = Period_end.substr(0,4);
               string e_temp_month = Period_end.substr(5,2);
               string e_temp_day = Period_end.substr(8,2);

               end_date_year= stoi(e_temp_year);
               end_date_month = stoi(e_temp_month);
               end_date_day = stoi(e_temp_day);
          }
          ~Period(){}

          string str_getter(){return all;}
          string start_date_getter(){return Period_start;}
          string end_date_getter(){return Period_end;}
          int body_condi_getter(){return body_condi;}
};