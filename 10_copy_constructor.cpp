//Type of Copy(2):Deep and Shallow

#include<iostream>
using namespace std;
//Shallow Copy
class Student{
    public:
    int id;
    string name;
    float cgpa;

    //constructor
    Student(int id,string name,float cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }

    //Copy Constructor
    Student(Student &x)
    {
        this->id=x.id;
        this->name=x.name;
        this->cgpa=x.cgpa;
    }

    //Output function
    void show()
    {
        cout<<"ID: "<<id<<"\n";
        cout<<"NAME: "<<name<<"\n";
        cout<<"CGPA: "<<cgpa<<"\n\n";
    }
};

//Deep Copy 
class Hospital{
    public:
    int *id;
    string name;                       

    //constructor
    Hospital(int i,string name)
    {
        this->name=name;
        id=new int;                            //Allocated New Memory Dynamically
        *id=i;
    }

    //Copy constructor
    Hospital(Hospital &x)
    {
         //To overcome this problem we are creating another heap memory for ID and copying the data into it to prevent the problem of double side data modification
        id=new int;
        this->name=x.name;
        *id=*x.id;
    }

    //Output
    void display()
    {
        cout<<"ID: "<<*id<<"\n";
        cout<<"NAME: "<<name<<"\n";
    }

};
int main()
{
    Student s1(1,"Manas",5);
    Student s2(s1);
    cout<<".......................SHALLOW COPY.................\n";
    cout<<"Actual Data in s1 & s2:\n";
    s1.show();
    s2.show();
    cout<<"\nAfter Modification:\n";
    s1.name="GORI";
    s2.name="ISHI";
    s1.show();
    s2.show();
    //Perfectly displayed the behaviour of shallow copy (Separate copies created)

    cout<<"\n\n...................DEEP COPY....................\nOriginal Data h1 & h2:\n";
    Hospital h1(1,"Manas");
    Hospital h2(h1);
    h1.display();
    h2.display();
    *(h1.id)=100;
    *(h2.id)=50;
    cout<<"\nData After modification:\n";
    h1.display();
    h2.display();

    return 0;

}