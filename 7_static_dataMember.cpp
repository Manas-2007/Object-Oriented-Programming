//Static Data Member is a special variable that shares its memory with all the objects of that class...(Memory allocate once and shared by all objects)

#include<iostream>
using namespace std;
class Student{
    public:
     static string name;                //Static declaration
};

//Static Data member defination
string Student::name="N/A";
int main()
{
    Student s1,s2;
    s1.name="Manas";                    //Same memory shared
    cout<<s2.name<<"\n";
    s2.name="Pari";
    cout<<s1.name<<"\n";
    cout<<s2.name<<"\n";
}