#include<iostream>
using namespace std;
class Bank{
    int id;
    string name;
    public:
    Bank(int id,string name)
    {
        this->id=id;
        this->name=name;
    }

    //Pass by value (Copy Create)
    void byvalue(Bank x)
    {
        x.id=10;
        x.name="ISHI";
    }

     //Pass by Reference (NO Copy Create)
    void byreference(Bank &x)
    {
        x.id=2020;
        x.name="ISHANVI";
    }

     //Pass by Reference (Using this operator)
    void bythis(Bank x)
    {
        this->id=2025;
        this->name="GORI";
    }

    void output()
    {
        cout<<"ID: "<<id<<"\n";
        cout<<"NAME: "<<name<<"\n";
    }

};
int main()
{
    Bank b1(1,"Manas");

    cout<<"ORIGINAL DATA IS: \n";
    b1.output();
    cout<<"\n\n";

    cout<<"PASS BY VALUE: \n";
    b1.byvalue(b1);                           //NO CHANGE IN DATA
    b1.output();
    cout<<"\n\n";

    cout<<"PASS BY REFERENCE: \n";
    b1.byreference(b1);                       //Value Updated
    b1.output();
    cout<<"\n\n";

    cout<<"USING THIS OPERATOR:\n";           //Value Updated
    b1.bythis(b1);
    b1.output();
    cout<<"\n";

    return 0;

}