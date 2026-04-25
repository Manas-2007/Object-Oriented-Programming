//Write a program to convert the object of one class into the object of another class with example

#include<iostream>
using namespace std;
class Base{
    public:
    int value;
    Base(int value)
    {
        this->value=value;
    }

    void show()
    {
        cout<<"VALUE OF BASE CLASS IS : "<<value<<"\n";
    }
};

class Derived{
    public:
    int data;
    Derived(Base x)         //Taking object of Base class
    {
        data=x.value;
    }

    void show()
    {
        cout<<"VALUE OF DERIVED CLASS IS : "<<data<<"\n";
    }
};

int main()
{
    Base x(45);
    x.show();
    Derived d(x);
    d.show();
    return 0;
}

