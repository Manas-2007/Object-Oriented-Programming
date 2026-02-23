#include<iostream>
using namespace std;
class Vehicle{
    public:
    void show()
    {
        cout<<"This is vehicle class\n";
    }
};

class MyClass{
    public:
    Vehicle x;
    void display()
    {
        x.show();
        cout<<"This is MyClass\n";
    }
};

int main()
{
    MyClass x;
    x.display();
}