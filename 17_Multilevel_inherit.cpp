#include<iostream>
using namespace std;
//Parent class (Person)
class Person{
    protected:
    int age;
    string name;
    public:
    Person()
    {
        age=0;
        name="N/A";
    }

    void pinfo()
    {
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter age : ";
        cin>>age;
    }

    void pdisplay()
    {
        cout<<"NAME : "<<name<<"\n";
        cout<<"AGE : "<<age<<endl;
    }
};

//Derived class from parent (Student)
class Student:public Person{
    protected:
    string branch;
    int roll;
    public:
    Student()
    {
        roll=0;
        branch="N/A";
    }
     void sinfo()
    {
        cout<<"Enter Roll No. : ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter Branch : ";
        getline(cin,branch);
    }

    void sdisplay()
    {
        pdisplay();
        cout<<"ROLL NO. : "<<roll<<"\n";
        cout<<"BRANCH : "<<branch<<endl;
    }
};

//Result class inherited from Student class
class Result:public Student{
    protected:
    float marks[3];
    public:
    Result()
    {
        for(int i=0;i<3;i++)
        {
            marks[i]=0 ;
        }
    }

    void inputmarks()
    {
        cout<<"     ENTER YOUR MARKS IN 3 SUBJECTS :\n";
         for(int i=0;i<3;i++)
        {
            cout<<"Subject "<<i+1<<" : ";
            cin>>marks[i];
        }
    }


    float sum()
    {
        float sum=0.0;
         for(int i=0;i<3;i++)
        {
            sum=sum+marks[i];
        }
        return sum;
    }
    
    float percentage()
    {
        float percent=(sum()/300)*100;
        return percent;
    }

    void result()
    {
        sdisplay();
        cout<<"MARKS OBTAINED (OUT OF 300) : "<<sum()<<"\n";
        cout<<"PERCENTAGE : "<<percentage()<<"%\n";
    }
};

int main()
{
    Result rohan;
    cout<<"Enter Following student credentials :\n";
    rohan.pinfo();
    rohan.sinfo();
    rohan.inputmarks();
    cout<<"\n\n";
    rohan.result();
    return 0;
}
