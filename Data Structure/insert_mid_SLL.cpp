#include<iostream>
using namespace std;
class Bank{
    public:
    int data;
    Bank *link;

};
int main()
{
    Bank *head=NULL,*ptr;
    Bank *b1=new Bank;
    Bank *b2=new Bank;
    Bank *b3=new Bank;
    
    b1->data=10;
    b2->data=20;
    b3->data=40;

    b1->link=b2;
    b2->link=b3;
    b3->link=NULL;
    head=b1;
    ptr=head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->link;
    }

    //Insertion function
    int x,info;
    cout<<"\n\nEnter the value of x (Existing NOde Data value) :";
    cin>>x;
    cout<<"Enter the value of NEW node: ";
    cin>>info;

    Bank *newnode=new Bank;
    newnode->data=info;

    ptr=head;       // Reset the ptr
    while(ptr->data!=x && ptr!=NULL)
    {
        ptr=ptr->link;
    }
    newnode->link=ptr->link;
    ptr->link=newnode;

    ptr=head;       //Reset the ptr
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->link;
    }

    return 0;
    
}