#include<iostream>
using namespace std;
//Parent class
class Transport{
    protected:
    string vehicle_no;
    int capacity;
    public:
    Transport()
    {
        vehicle_no="N/A";
        capacity=0;
    }
    void inputTransport()
    {
        cout<<"Enter Vehicle No. :";
        cin>>vehicle_no;
        cout<<"Enter Vehicle capacity :";
        cin>>capacity;
    }
    void outputTransport()
    {
        cout<<"VEHICLE NO. : "<<vehicle_no<<"\n";
        cout<<"CAPACITY : "<<capacity<<"\n";
    }
};

//Derived Class 1
class Bus : public Transport{
    protected:
    string driver_name;
    int route_no;
    public:
    Bus()
    {
        driver_name="N/A";
        route_no=0;
    }
    void binput()
    {
        inputTransport();
        cout<<"Enter Route No. :";
        cin>>route_no;
        cout<<"Enter Driver Name : ";
        cin.ignore();
        getline(cin,driver_name);
    }
    void boutput()
    {
        outputTransport();
        cout<<"ROUTE NO. : "<<route_no<<endl;
        cout<<"DRIVER : "<<driver_name<<endl;
    }
};

//Derived class 2
class ElectricSystem: public Transport{
    protected:
    int batteryCapacity,chargingTime;
    public:
    ElectricSystem()
    {
        batteryCapacity=0;
        chargingTime=0;
    }
    void electricinput()
    {
        cout<<"Enter charging time of battery : ";
        cin>>chargingTime;
        cout<<"Enter Battery Capacity : ";
        cin>>batteryCapacity;        
    }
    void electricoutput()
    {
        cout<<"BATTERY CAPACITY : "<<batteryCapacity<< " mAh\n";
        cout<<"CHARGING TIME : "<<chargingTime<< " HOURS\n";
    }
};

//Hybrid Class
class ElectricBus: public ElectricSystem, public Bus{
    public:
    string isWifi;
    ElectricBus()
    {
        isWifi="NO";
    }
    void startservice()
    {
        cout<<"....Transport Service Started...........\n";
    }
    void stopservice()
    {
        cout<<"....Transport Service Stopped...........\n";
    }
    void hybridinput()
    {
        binput();
        electricinput();
        cout<<"Is Wifi Availalble (YES/NO) : ";
        cin>>isWifi;
    }
    void hybridoutput()
    {
        boutput();
        startservice();
        stopservice();
        electricoutput();
        cout<<"WIFI AVAILIBILITY : "<<isWifi<<"\n";
    }
};

int main()
{
   ElectricBus x;
   x.hybridinput();
   cout<<"\n\n";
   x.hybridoutput();
   return 0;
}