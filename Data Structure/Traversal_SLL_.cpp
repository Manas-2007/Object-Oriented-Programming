#include<iostream>
using namespace std;
//Creating Node structure
class Node{
    public:
    int data;
    Node *link;
};
int main()
{
    //Creating 5 nodes 
    Node *n1=new Node;
    Node *n2=new Node;
    Node *n3=new Node;
    Node *n4=new Node;
    Node *n5=new Node;
    Node *Head=NULL,*ptr;

    //Data Entry in nodes
    n1->data=10;
    n2->data=20;
    n3->data=30;
    n4->data=40;
    n5->data=50;

    //Creating Links of the nodes
   Head=n1;
    n1->link=n2;
    n2->link=n3;
    n3->link=n4;
    n4->link=n5;
    n5->link=NULL;

    ptr=Head;


    if(Head==NULL)
    {
        cout<<"LIST IS EMPTY";
    }
    else
    {  
        while(ptr!=NULL)
    {
        int x=ptr->data;
        cout<<x<<"  ";
        cout<<x*x<<"  ";
        cout<<"\n";
        ptr= ptr->link;
    }
}
    return 0;
    

}