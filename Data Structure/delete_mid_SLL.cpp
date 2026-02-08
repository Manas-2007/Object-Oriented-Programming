#include<iostream>
using namespace std;
class node{
    public:
    int id;
    node *link;
};
int main()
{
    node *n1=new node;
    node *n2=new node;
    node *n3=new node;
    node *n4=new node;
    node *head=NULL,*ptr1,*ptr2;

    n1->id=100;
    n1->link=n2;
    n2->id=200;
    n2->link=n3;
    n3->id=300;
    n3->link=n4;
    n4->id=400;
    n4->link=NULL;
    //Display
    cout<<"ORIGINAL LIST:\n";
    head=n1;
    ptr1=head;
    while(ptr1!=NULL)
    {
        cout<<ptr1->id<<"  ";
        ptr1=ptr1->link;
    }

    int x;
    cout<<"\nEnter the value just after you want to delete data: ";
    cin>>x;
    ptr1=head;              //Reset
    while(ptr1->link!=NULL)
    {
        if(ptr1->id==x)
        {
            ptr2=ptr1->link;
            ptr1->link=ptr2->link;
            delete ptr2;
            break;
        }
        ptr1=ptr1->link;
    }

    ptr1=head;
    cout<<"\nAFTER DELETION:\n";
    while(ptr1!=NULL)
    {
        cout<<ptr1->id<<"  ";
        ptr1=ptr1->link;
    }
return 0;
    
}