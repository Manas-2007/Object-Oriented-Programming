#include<iostream>
using namespace std;
class A{
    public:
    int value;
    void display()
    {
        cout<<"The value of CLASS A is "<<value<<"\n";
    }
};

class B{
    public:
    int value;
    void display()
    {
        cout<<"The value of CLASS B is "<<value<<"\n";
    }
};

class Derived:public A, public B{
    public:
    void show()
    {
       A:: value=10;
       B::value=50;
       B::display();
        A::display();
    }
};

int main()
{
    Derived x;
    x.show();
    return 0;
}



