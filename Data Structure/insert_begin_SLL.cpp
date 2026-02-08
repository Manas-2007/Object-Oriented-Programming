#include<iostream>
using namespace std;
class Hospital{
    public:
    string name;
    Hospital *link;
};
int main()
{
    //Creaating Nodes
    Hospital *h1=new Hospital;
    Hospital *h2=new Hospital;
    Hospital *h3=new Hospital;
    Hospital *head=NULL,*ptr;

    //Data entry & linking of nodes
    head=h1;
    ptr=head;
    h1->name="Manish";
    h1->link=h2;
    h2->name="Manas";
    h2->link=h3;
    h3->name="Surbhi";
    h3->link=NULL;

    //Traversal (Before Insertion)
    cout<<"Before Insertion:\n";
    if(head==NULL)
    {
        cout<<"List is Empty\n";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->name<<"  ";
            ptr=ptr->link;
        }
    }


    //New node insertion code
    Hospital *inode= new Hospital;
    inode->name="Monika";
    inode->link=h1;
    head=inode;
    ptr=head;

     //Traversal (After Insertion)
    cout<<"\n\nAfter Insertion:\n";
    if(head==NULL)
    {
        cout<<"List is Empty\n";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->name<<"  ";
            ptr=ptr->link;
        }
    }

    //After Deleting Last Node
    ptr=head;
    delete h3;
    h2->link=NULL;
      //Traversal (After Deletion)
    cout<<"\n\nAfter Deletion:\n";
    if(head==NULL)
    {
        cout<<"List is Empty\n";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->name<<"  ";
            ptr=ptr->link;
        }
    }





    return 0;


}