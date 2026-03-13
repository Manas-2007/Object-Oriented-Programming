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
    Vehicle x;
        public:
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
    return 0;
}