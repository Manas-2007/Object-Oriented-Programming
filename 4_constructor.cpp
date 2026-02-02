#include<iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    float cgpa;
    public:

    //Default Constructor
    Student()
    {
        rollNo=0;
        name="N/A";
        cgpa=0.0;
    }

    //Parameterised Constructor
    Student(int rollN0,string name,float cgpa)
    {
        this->rollNo=rollN0;
        this->name=name;
        this->cgpa=cgpa;
    }

    //Copy Constructor
    Student(const Student &x)
    {
        name=x.name;
        rollNo=x.rollNo;
        cgpa=10;                                    //CGPA NOT Copied (But Re-initialised)
    }

    //display output
    void display()
    {
        cout<<"ROLL NO.: "<<rollNo<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<"\n\n";
    }
};
int main()
{
    Student s1;                              //Default Constructor Verification
    s1.display();

    Student s2(1,"MANAS",4.6);              //Parameterised Constructor Verification
    s2.display();

    Student s3=s2;                          //Copy Constructor (Only Name Copied) Verification
    s3.display();


return 0;

}