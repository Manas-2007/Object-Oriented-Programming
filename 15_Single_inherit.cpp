#include<iostream>
using namespace std;
class Base{
    public:
    int add(int x,int y)
    {
        return x+y;
    }
};

class Derived:public Base{
    public:
    int sum(int a,int b)
    {
        return add(a,b);
    }
};

int main()
{
    Base b1;
    int result=b1.add(5,10);
    cout<<"BASE SUM : "<<result<<"\n";
    Derived d1;
    int result2=d1.sum(10,10);
    cout<<"DERIVED SUM : "<<result2<<"\n";

    return 0;
}