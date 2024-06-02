#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class PMS{ 
          string PMS_all;
          int date_year;//date
          int date_month;
          int date_day;
          int body_condi;
          
     public:
          PMS(){//constructor
          cout <<"enter date [YYYY/MM/DD/Body condition(0-9)]"<< endl;
          cin >> PMS_all;
          string temp_year = PMS_all.substr(0,4);
          string temp_month = PMS_all.substr(5, 2);
          string temp_day = PMS_all.substr(8, 2);
          string temp_body_condi = PMS_all.substr(11, 1);
     
          date_year= stoi(temp_year);
          date_month = stoi(temp_month);
          date_day = stoi(temp_day);
          body_condi = stoi(temp_body_condi);
          }

          PMS(string str){
          PMS_all = str;
          string temp_year = PMS_all.substr(0,4);
          string temp_month = PMS_all.substr(5, 2);
          string temp_day = PMS_all.substr(8, 2);
          string temp_body_condi = PMS_all.substr(11, 1);
     
          date_year= stoi(temp_year);
          date_month = stoi(temp_month);
          date_day = stoi(temp_day);
          body_condi = stoi(temp_body_condi);
          }

          ~PMS(){};
          //methodで、stoiをやってくれるのが欲しい。
          //methodでstringの値出してくれるのが欲しい。
          
          string str_getter(){return PMS_all;}
          int date_year_getter(){return date_year;}
          int date_month_getter(){return date_month;}
          int date_day_getter(){return date_day;}
          int body_condi_getter(){return body_condi;}
};
