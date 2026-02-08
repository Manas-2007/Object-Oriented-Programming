#include<iostream>
using namespace std;
class Node{
    public:
    int id;
    Node *link;
};
int main()
{
    Node *n1=new Node;
   Node *n2=new Node;
    Node *n3=new Node;
    Node *ptr,*head=NULL,*prep;

    n1->id=101;
    n1->link=n2;
    n2->id=102;
    n2->link=n3;
    n3->id=103;
    n3->link=NULL;

    //Traversal before Deletion
     head=n1;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->id<<"  ";
        ptr=ptr->link;
    }
    cout<<"\n\nAfter Deleting the Last Node:\n";

    //Deleting last node
   ptr=head;   //   Reset ptr
   if(head==NULL)
   {
    cout<<"List is Empty";
   }
   else if(ptr->link==NULL)
   {
    delete ptr;
    head=NULL;
   }
   else{
   while((ptr->link)->link !=NULL)
   {
        ptr=ptr->link;
   }

   delete ptr->link;
   ptr->link=NULL;
}

   //Reset the traversal
   ptr=head;
   while(ptr!=NULL)
   {
    cout<<ptr->id<<"  ";
    ptr=   ptr->link;
   }
return 0;
}