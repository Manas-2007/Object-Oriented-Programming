//Friend Function + friend Class

//Friend function
#include<iostream>
using namespace std;
class Student{
    int id;
    string name;
    float cgpa;
    public:
    Student(int id,string name,float cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
    void display()
    {
        cout<<"ID: "<<id<<"\n";
        cout<<"NAME: "<<name<<"\n";
        cout<<"CGPA: "<<cgpa<<"\n";
    }
     friend class Teacher;
     friend void friendfunc(Student x);                 //friend function (to display private data members)
    };

    void friendfunc(Student x)                         //Friend function declaration
    {
       cout<<"NAME: "<<x.name<<"\n";
    }



    //friend Class
    class Teacher{
        string name;
        float salary;
        public:
        Teacher(string name,float salary)
        {
            this->name=name;
            this->salary=salary;
        }

        //Declaration friend class concept
        void friendclass(Student z)
        {
           cout<<"ID: "<<z.id<<"\n";
            cout<<"NAME: "<<z.name<<"\n";
            cout<<"CGPA: "<<z.cgpa<<"\n";

        }
    };

int main()
{
    Student s1(1,"Manas",5);
    cout<<"Accessing Private Information (Friend Function):\n";
    friendfunc(s1);
    Teacher t1("Mitali",56000);
    cout<<"Accessing Private Information (Friend Class):\n";
    t1.friendclass(s1);
}