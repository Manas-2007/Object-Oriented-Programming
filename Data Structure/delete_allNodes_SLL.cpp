#include<iostream>
using namespace std;
class node{
    public:
    string name;
    node *link;
};
int main()
{
    node *n1=new node;
    node *n2=new node;
    node *n3=new node;
    node *n4=new node;
    node *ptr,*head=NULL;

    n1->name="Manas";
    n1->link=n2;
    n2->name="Nitin";
    n2->link=n3;
    n3->name="Sachin";
    n3->link=n4;
    n4->name="Ashwin";
    n4->link=NULL;
    
    //Display
    cout<<"ORIGINAL LIST:\n";
    head=n1;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }

    //CLEAR ENTIRE LINKED LIST
    ptr=head;                   //Reset
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        delete head;
        head=ptr;
    }

    //Display
    cout<<"\nLisit After Deletion:\n";
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<"  ";
        ptr=ptr->link;
    }

    if(ptr==NULL && head==NULL)
    {
        cout<<"=====LIST IS CLEARED======\n";
    }
    else{
        cout<<"====ITEMS NOT CLEARED! ERROR======\n";
    }
    return 0;

}