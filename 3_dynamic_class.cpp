#include<iostream>
using namespace std;
class Myntra{
    public:
    int id;
    string product;
    float price;
    
    //Constructor
    Myntra(int id=0,string product="N/A",float price=0.0)
    {
        this->id=id;
        this->product=product;
        this->price=price;
    }
};
int main()
{
    Myntra *n;
    n=new Myntra;           //Dynamic Allocation in Objects
    (*n).product="Bag";
    (*n).id=1;
    (*n).price=500;                     // (*n).id = n->id  (both can work for deferencing)

    cout<<"Your Product is :\n";
    cout<<"ID: "<<n->id<<"\n";
    cout<<"PRODUCT: "<<n->product<<"\n";
    cout<<"PRICE: "<<n->price<<"\n";
    delete n;
    return 0;
    
}