#include<iostream>
using namespace std;
//Student Class (BASE)
class Student{
    private:
    int roll;
    string name;
    public:
    //constructor
    Student()
    {
        roll=0;
        name="N/A";
    }
    
    void getdata()
    {
        cout<<"======================ENTER FOLLOWING DETAILS===========================\n";
        cout<<"ROLL NO. : ";
        cin>>roll;
        cin.ignore();
        cout<<"STUDENT NAME :";
        getline(cin,name);
    }
    void showdata()
    {
        cout<<"ROLL NO. : "<<roll<<"\n";
        cout<<"NAME : "<<name<<"\n";
    }
};

//Derived class (RESULT)
class Result:public Student{
    private:
    float marks[3];
    public:
    //constructor
    Result()
    {
        for(int i=0;i<3;i++)
        {
            marks[i]=0;
        }
    }

    void getmarks()
    {
        for(int i=0;i<3;i++)
        {
            cout<<"SUBJECT "<<i+1<<" : ";
            cin>>marks[i];
        }
    }

    float calculate()
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
        float percentage=(calculate()/300)*100;
        return percentage;
    }

    void result()
    {
           showdata();
           cout<<"MARKS OBTAINED (OUT OF 300): "<<calculate()<<"\n";
           cout<<"PERCENTAGE : "<<percentage()<<"%\n\n";        
    }
};

int main()
{
    Result r;
    cout<<"Enter the Following Details :\n";
    r.getdata();
    r.getmarks();
    cout<<"=========YOUR COMPUTER GENERATED RESULT========\n";
    r.result();
    return 0;
}