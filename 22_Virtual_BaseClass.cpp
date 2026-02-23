#include<iostream>
using namespace std;
class Vehicle{
    public:
    int speed;
    void show()
    {
        cout<<"Vehicle Stated...........\n";
    }
};

class Electric_vehicle:virtual public  Vehicle{
    public:
    void show()
    {
        cout<<"Electric Vehicle......\n";
    }
};

class Petrol_vehicle:virtual public Vehicle{
    public:
    void show()
    {
        cout<<"Petrol vehicle.......\n";
    }
};

class hybrid_vehicle:virtual public  Electric_vehicle, virtual public  Petrol_vehicle{
    public:
    void show()
    {
        cout<<"Hybrid vehicle............\n";
    }
};
int main()
{
    hybrid_vehicle c;
    Petrol_vehicle *x;
    x=&c;
    x->show(); 
    x->speed=50;
       

    
   
}