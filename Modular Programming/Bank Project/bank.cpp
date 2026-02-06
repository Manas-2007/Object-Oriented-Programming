#include<iostream>
#include<string>
#include"bank.h"
using namespace std;

//Construtor Declaration
Bank::Bank()
{
    id=0;
    name="N/A";
    dob="N/A";
    address="N/A";
    actype="N/A";
    contact="N/A";
    balance=0.0;
}
Bank::Bank(int id,std::string name,std::string dob,std::string actype,std::string contact,std::string address,float balance)
{
    this->id=id;
    this->name=name;
    this->dob=dob;
    this->address=address;
    this->contact=contact;
    this->actype=actype;
    this->balance=balance;
}

//input & output function
void Bank::input()
{
    cout<<"ID: ";
    cin>>id;
    cin.ignore();
    cout<<"NAME: ";
    getline(cin,name);
    cout<<"ACCOUNT TYPE (Saving/Current): ";
    getline(cin,actype);
    cout<<"Set Security PIN: ";
    cin>>mainpin;
    cin.ignore();
    cout<<"CONTACT NO:";
    getline(cin,contact);
    cout<<"ADDRESS: ";
    getline(cin,address);    
}

void Bank::output()
{
    cout<<"ID : "<<id<<"\n";
    cout<<"NAME : "<<name<<endl;
    cout<<"ACCOUNT : "<<actype<<endl;
    cout<<"DATE OF BIRTH : "<<dob<<endl;
    cout<<"CONTACT NO. : "<<contact<<endl;  
    cout<<"ADDRESS :  "<<address<<endl;
}


