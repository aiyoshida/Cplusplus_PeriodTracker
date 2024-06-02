#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>//file handling
#include "file.h"
using namespace std;

void menu()
     {
     cout <<"--------------------------------------"<<endl;
     cout << "Welcome to Ai's period tracker!!" << endl;
     cout <<"--------------------------------------" << endl;
     cout << "What would you like to do?"<< endl;
     cout <<"1) input PMS data"<< endl;
     cout <<"2) input Period data"<< endl;
     cout <<"3) Display past period record"<< endl;
     cout <<"4) Display past PMS record"<< endl;
     cout <<"-------------------------------------" << endl;
     cout << "Please enter the number which you would like to do: ";
     int choice;
     cin >> choice;//ここでexeption handling入れる。
try{
               if(choice == 1)
               {
               PMS *A = new PMS;
               file *B = new file;
               B->file::add_PMS(A->PMS::str_getter());//method
               delete A;
               delete B;
               }
               if(choice == 2)
               {
               Period *Ap = new Period;
               file *Bp = new file;
               Bp->file::add_Period(Ap->Period::str_getter());
               delete Ap;
               delete Bp;
               }
               if(choice == 3)
               {
               file *B3 =  new file;
               B3->file::read_Period();
               
               delete B3;
               }
               if(choice == 4)
               {
               file *B4 = new file;
               B4->file::read_PMS();
               delete B4;
               }
     
               if(choice < 1 || choice > 4)
               {
                    throw(choice);
               }
          
}
     
     catch(int e)
          {
               cout<<"There is no such option! Please enter the number 1 to 4"<<endl;
          }
     catch(...)
          {
               //cout<<"unknown error"<<endl;
               //cout<<choice<<endl;
               exit(1);
          }
}


int main()
{
     ofstream fileName1("PMS.txt", ios::app);//ファイルの作成
          if (!fileName1)
          {
               cout << "File did not open" << endl;
          }
          fileName1.close();

     ofstream fileName2("Period.txt",ios::app);
          if(!fileName2)
          {
               cout<<"fail to open the file"<<endl;
          }
          fileName2.close();
     menu();
     return 0;
}