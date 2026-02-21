#include<iostream>
using namespace std;
//Camera class
class Camera{
    protected:
    int photos;
    public:
    Camera(){
        photos=0;
    }

    void input()
    {
        cout<<"Total Photos : ";
        cin>>photos;
    }
    void show()
    {
        cout<<"TOTAL PHOTOS IN MEMORY : "<<photos<<"\n";
    }
};

//Music Class
class Songs{
    protected:
    int songs;
    public:
    Songs()
    {
        songs=0;
    }

    void input()
    {
        cout<<"Enter total songs : ";
        cin>>songs;
    }
    void show()
    {
        cout<<"\n\nTOTAL SONGS IN MEMORY : "<<songs<<"\n";
    }
};

//Todo list class
class Task{
    protected:
    string tasks;
    public:
    Task()
    {
        tasks="N/A";
    }
    void input()
    {
        cout<<"Enter your Pending Works : ";
        cin.ignore();
        getline(cin,tasks);
    }

    void show()
    {
        cout<<"PENDING WORK : "<<tasks<<"\n";
    }
};

//Derived Class
class Phone:public Camera, public Task, public Songs{
    public:
    void display()
    {
       Camera::input();
        Songs::input();
        Task::input();
        Camera::show();
        Songs::show();
        Task::show();
    }
};

int main()
{
    Phone x;
    cout<<"===============SMARTPHONE STATES=====================\n";
    x.display();


}



