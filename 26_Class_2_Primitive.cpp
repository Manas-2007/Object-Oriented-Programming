//Write a program to convert the class object int primitive data type with example

#include<iostream>
using namespace std;
class Criminal{
    int id;
    public:
    Criminal(int id)
    {
        this->id=id;
    }

    //Conversion Operator Overloading
    operator int()
    {
        return id;
    }
};
int main()
{
    Criminal x(500);
    int value=x;
    cout<<"Converted Value is : "<<value<<"\n";
    return 0;

}