#include<iostream>
using namespace std;
//Base class
class Vehicle{
    protected:
    string noPlate;
    string brand;
    int speed;
    public:
    Vehicle()
    {
        noPlate="N/A";
        brand="N/A";
        speed=0;
    }
    void vinput()
    {
        cout<<"Enter Vehicle Number : ";
        cin>>noPlate;
        cout<<"Enter Brand : ";
        cin>>brand;
        cout<<"Enter speed of vehicle: ";
        cin>>speed;
    }
    void start()
    {
        cout<<"Vehicle started at Speed : "<<speed<<" KM/H\n";
    }
    void stop()
    {
        cout<<"Vehicles stoped at speed 0 KM/H\n";
    }
    void voutput()
    {
        cout<<"VEHICLE NO. : "<<noPlate<<"\n";
        cout<<"BRAND : "<<brand<<"\n";
        cout<<"SPEED : "<<speed<<"KM/H\n";
        start();
        stop();

    
    }
};

//Derived class 1 
class Bike:public Vehicle{
    private:
     string hasHelmet;
    public:
    Bike()
    {
        hasHelmet="NO";
    }

    void binput()
    {
        vinput();
        cout<<"Is Helmet available (YES/NO):";
        cin>>hasHelmet;
    }
    void boutput()
    {
        voutput();
        cout<<"HELMET : "<<hasHelmet<<"\n";
    }
};

//Derived class 2
class Truck:public Vehicle{
    private:
    int load_capacity;
    public:
    Truck()
    {
        load_capacity=0;
    }
    void tinput()
    {
        vinput();
        cout<<"Truck Load Capacity: ";
        cin>>load_capacity;
    }

    void toutput()
    {
        voutput();
        cout<<"LOAD CAPACITY : "<<load_capacity<<"KG\n";
    }
};

//Derived class 3
class Car:public Vehicle{
    private:
    int door;
    public:
    Car()
    {
        door=0;
    }
    void cinput()
    {
        vinput();
        cout<<"No of Door in Car : ";
        cin>>door;
    }
    void coutput()
    {
        voutput();
        cout<<"NO. OF DOORS  :"<<door<<"\n";
    }
};

int main()
{
    Bike b;
    cout<<"==================BIKE===================\n";
    b.binput();
    cout<<"\n";
    b.boutput();
    cout<<"\n\n======================TRUCK========================\n";
    Truck t;
    t.tinput();
    cout<<"\n";
    t.toutput();
    cout<<"\n\n======================CAR========================\n";
    Car c;
    c.cinput();
    cout<<"\n";
    c.coutput();

    return 0;
}
