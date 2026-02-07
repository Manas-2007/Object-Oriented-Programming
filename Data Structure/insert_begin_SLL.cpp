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
    h1->name="Manas";
    h2->link=h3;
    h3->name="Surbhi";
    h3->link=NULL;

    // //Traversal (Before Insertion)
    // cout<<"Before Insetion:\n";
    // if()


}