#include<iostream>
using namespace std;
//Base class
class Devices{
    protected:
    int device_id;
    string brand;
    public:
    Devices()
    {
        device_id=0;
        brand="N/A";
    }
    void dinput()
    {
        cout<<"Enter device id : ";
        cin>>device_id;
        cout<<"Enter device brand : ";
        cin>>brand;
    }
    void doutput()
    {
         poweron();
        cout<<"DEVICE ID : "<<device_id<<"\n";
        cout<<"BRAND : "<<brand<<"\n";
        poweroff();

    }
    void poweron()
    {
        cout<<"DEVICE IS POWERED ON.......\n";
    }
    void poweroff()
    {
        cout<<"DEVICE IS POWERERED OFF.......\n";
    }
};

//Derived class
class console:  virtual public Devices{
    protected:
    int storageGB;
    public:
    console()
    {
        storageGB=0;
    }
    void cinput()
    {
        dinput();
        cout<<"Enter device storage capacity : ";
        cin>>storageGB;
    }
    void coutput()
    {
        doutput();
        cout<<"DEVICE STORAGE : "<<storageGB<<" GB\n";
    }

};

//Derived class 
class handheld:virtual public Devices{
    protected:
    int batterymh;
    public:
    handheld()
    {
        batterymh=0;
    }
    void hinput()
    {
        dinput();
        cout<<"Enter battery Mh: ";
        cin>>batterymh;
    }
    void houtput()
    {
        doutput();
        cout<<"BATTERY CAPACITY : "<<batterymh<<"\n";
    }
};
//Hybrid class
class HybridGamingDevice:public console, public handheld{
    private:
    string supportCloudGaming;
    public:
    HybridGamingDevice()
    {
        supportCloudGaming="NO";
    }
    void input()
    {
         cinput();
       cout<<"Enter Battery Capacity : ";
       cin>>batterymh;
        cout<<"Suppport cloud gaming (yes/no): ";
        cin>>supportCloudGaming;
    }
    void output()
    {
        coutput();
        cout<<"BATTERY CAPACITY : "<<batterymh<<" MH\n";
        cout<<"GAMING CLOUD : "<<supportCloudGaming<<"\n";
    }

};

int main()
{
    HybridGamingDevice h;
    h.input();
    cout<<"\n";
    h.output();

    return 0;
}