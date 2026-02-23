#include<iostream>
using namespace std;
class Payment{
    public:
   virtual void display()=0;                //Pure Virtual Function

};

class UPI:public Payment{
    public:
    void display()
    {
        cout<<"UPI Payment\n";
    }
};

int main()
{
   UPI x;
   cout<<"......DERIVED CLASS.........\n";
   x.display();

   Payment *p;
   UPI u;
   p=&u;
   cout<<"......BASE CLASS (POINTER VARIABLE).......\n";
   p->display();

   return 0;
}