#include<iostream>
using namespace std;
class Student{
    int *id;                    //ID allocated dynamically
    public:
    
    //Constructor
    Student(int x)
    {
        id=new int;     
       *id=x;
        cout<<"Constructor : "<<*id<<endl;

    }
    //Destructor
    ~Student()
    {
        cout<<"\nDestructor :"<<*id;
        delete id;                              //Free Dynamically Allocated Memory (Must free after 'cout' statements in destructor member function, if placed above cout then it will delete early and we cant get our desired result....so make sure to place it below our cout statements so that at the end of execution memory gets free.)

    }
};
int main()
{
    //Objects are created in the order they are declared, and destroyed in the reverse order when the program ends.Constructor runs in order, destructor runs in reverse order (LIFO).
            
    Student s1(1);
    Student s2(2);
    Student s3(3);
    Student s4(4);
    Student s5(5);


    return 0;
    
}