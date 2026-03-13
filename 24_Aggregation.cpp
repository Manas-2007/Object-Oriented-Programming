#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    float CGPA;
    public:
    Student(int roll,string name,float cgpa)
    {
        this->roll=roll;
        this->name=name;
        this->CGPA=cgpa;
    }

    void show()
    {
        cout<<"ROLL NO : "<<roll<<"\n";
        cout<<"NAME    : "<<name<<"\n";
        cout<<"CGPA    : "<<CGPA<<"\n\n";
    }
};

//Aggregated class
class Home{
    string address;
    public:
    //Accessing Student class without inheritance   (via Pointer/reference)
    Student *x;
    Home(string add,Student *details)
    {
        this->address=add;
        x=details;
    }

    //Come back 
    void showmain()
    {
        cout<<"ADDRESS  : "<<address<<"\n";
        x->show();
    }
};

int main()
{
    Student s(1,"Manas",8.7);
    cout<<"         NORMAL CALLING OBJECT\n";
    s.show();

    Home h("Gwalior",&s);
    cout<<"\n       CALLING THROUGH AGGREGATED CLASS\n";
    h.showmain();

    return 0;

}