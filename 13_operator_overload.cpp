#include<iostream>
using namespace std;
class Math{
    public:
    int number;
    
    //Default Constructor
    Math()
    {
        number=0;
    }

    //Parameterised constructor
    Math(int number)
    {
        this->number=number;
    }

    //Overloading (+)
    Math operator +(Math &x)
    {
        int sum;
        sum=number+x.number;
        cout<<"The sum is "<<sum<<"\n\n";
    }

    //Subtration (-)
     Math operator -(Math &x)
    {
        int dif;
        dif=number-x.number;
        cout<<"The difference is "<<dif<<"\n\n";
    }

    //Multiplication (*)
     Math operator *(Math &x)
    {
        int product;
        product=number*x.number;
        cout<<"The Product is "<<product<<"\n\n";
    }

    //Divison (/)
     Math operator /(Math &x)
    {
        int Division;
        Division=number/x.number;
        cout<<"The Division is "<<Division<<"\n\n";
    }

    //Increment (++)
    Math operator ++()
    {
        number=number+1;
        cout<<"AFTER INCREMENT BY 1 : "<<number<<"\n\n";
    }
};
int main()
{
    int a,b;
    cout<<"ENTER FIRST NUMBER:";
    cin>>a;
    cout<<"ENTER SECOND NUMBER:";
    cin>>b;
    Math m1(a);
    Math m2(b);
    Math m3=m1+m2;
    m3=m1-m2;
    m3=m1*m2;
    m3=m1/m2;
    m1.operator++();
    m2.operator++();


}