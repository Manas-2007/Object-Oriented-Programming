//Write a program to convert the primitive data type iype into user defined dsata type with example....

#include<iostream>
using namespace std;
class Conversion{
    int data;
    public:

    //Conversion construction
    Conversion(int z)
    {
        data=z;
    }
    void show()
    {
        cout<<"Converted Data is : "<<data<<"\n";
    }
};

int main()
{
    int a=500;          //Primitive data
    Conversion x(a);    //Converted
    x.show();

    return 0;
}