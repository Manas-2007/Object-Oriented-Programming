//Static Member Function: It is a function of a class that works only on the STATIC DATA MEMBERS of class (NOT NON-STATIC).....also it is called by class name and NO NEED OF OBJECT CREATION....

#include<iostream>
using namespace std;
class Student{
    public:
    static string name;                  //Static Data Member
    static void display()               //Static Member Function
    {
        cout<<name<<"\n";
    }
};
string Student::name="N/A";
int main()
{
    Student::name="Manas";
    Student::display();

}