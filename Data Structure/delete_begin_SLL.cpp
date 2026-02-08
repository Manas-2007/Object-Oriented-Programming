#include<iostream>
using namespace std;
class Bank{
    public:
    string name;
    Bank *link;
};
int main()
{
    Bank *b1=new Bank;
    Bank *b2=new Bank;
    Bank *b3=new Bank;
    Bank *ptr,*head=NULL;

    b1->link=b2;
    b2->link=b3;
    b3->link=NULL;

    b1->name="MANAS";
    b2->name="GORASHI";
    b3->name="SHUSHMA";

    //Traversal before deletion
    head=b1;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }

    //After DELETING FIRST NODE
    ptr=head;           //Reset
    head=ptr->link;
    delete ptr;

    ptr=head;
    cout<<"\n\n";
     while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }
    

}