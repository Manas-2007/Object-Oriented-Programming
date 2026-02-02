#include<iostream>
using namespace std;
class Amazon{
    int id;
    string name;
    float price;
    public:
    
    //Default Parameterised Constructor
     Amazon(int id=0,string name="N/A",float price=0.0)
    {
        this->id=id;
        this->name=name;
        this->price=price;
    }

    //Display Output
    void output()
    {
        cout<<"ID: "<<id<<"\n";
        cout<<"NAME: "<<name<<"\n";
        cout<<"PRICE: "<<price<<"\n";
    }

    //Update Original Data
    void update(Amazon &x)                      //Call by reference (Passed Object of the Class)
    {
        x.name="GORASHI";
        x.price=5000;

    }
};
int main()
{
   Amazon a,b(1),c(1,"Manas"),d(1,"Ishi",56);
   a.output();
   cout<<"\n\n";

   b.output();
   cout<<"\n\n";

   c.output();
    cout<<"\n\n";

   d.output();
   cout<<"\n\n";

   // Modifying data of a
   a.update(a);
   a.output();

   return 0;
    
}
