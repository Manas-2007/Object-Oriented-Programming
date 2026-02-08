#include<iostream>
using namespace std;

class Student{
public:
    string name;
    Student *link;
};

int main()
{
    Student *s1=new Student;
    Student *s2=new Student;
    Student *s3=new Student;
    Student *ptr,*head=NULL;

    head=s1;

    s1->name="Manas";
    s1->link=s2;
    s2->name="Priya";
    s2->link=s3;
    s3->name="Suman";
    s3->link=NULL;

    cout<<"Before Insertion:\n";
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }

    // insert at end
    Student *iend=new Student;
    iend->name="Gorashi";
    iend->link=NULL;

    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=iend;

    cout<<"\nAfter Insertion:\n";
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }

    return 0;
}
