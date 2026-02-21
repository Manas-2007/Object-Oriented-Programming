#include<iostream>
using namespace std;
class Manager{
    public:
   virtual void display()
    {
        cout<<"Hello I am Manager of the Base......\n\n";
    }
};

class Employee:public Manager{
    public:
    void display()
    {
        cout<<"I am a DERIVED function..........\n\n";
    }
};

int main()
{
    Manager *m;
    m=new Employee;
    m->display();
    return 0;
}