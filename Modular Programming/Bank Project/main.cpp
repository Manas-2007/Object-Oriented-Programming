#include<iostream>
#include"bank.h"
#include<string>
using namespace std;
int main()
{
  int serviceno,size;
  cout<<"TOTAL NUMBER OF ACCOUNT HOLDERS: ";
  cin>>size;
  Bank *b=new Bank[size];
   cout<<"********************************************************************************************************\n";
   cout<<"                                 WELCOME TO BANK MANAGEMENT SYSTEM                                      \n";
   cout<<"********************************************************************************************************\n";

   //Available Services
   cout<<"Available Banking Services: \n";
   cout<<"1) Registration\n";
   cout<<"2) Login\n";
   cout<<"3) Account Holder Information\n";
   cout<<"4) Deposit Balance\n";
   cout<<"4) Withdraw Balance\n";
   cout<<"5) Check Available Balance\n";
   cout<<"6) Exit\n\n";
   cout<<"Select Your Service Number(1-6): ";
   cin>>serviceno;
   switch(serviceno)
   {
    case 1:
    cout<<"                                   WELCOME TO REGISTRATION SERVICE                                    /n";
    

    
   }

   
   


}