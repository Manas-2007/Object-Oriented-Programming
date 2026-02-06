#ifndef BANK_H
#define BANK_H
#include<string>
class Bank{
    int id,mainpin;
    std::string name,dob,actype,contact,address;
    float balance;
    public:

    //Constructors
    Bank();
    Bank(int id,std::string name,std::string dob,std::string actype,std::string contact,std::string address,float balance);

    //Input  & output info function
    void input();
    void output();
    
    
    

};
#endif