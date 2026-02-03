//There are two ways to define your class member function : inline and outside(via scope resolution operator (::))

#include<iostream>
using namespace std;
class Hospital{
   public:
   
   //Inline Function
   void printinline()
   {
    cout<<"This is inline function\n";
   }

   //Outside function
   void printoutside();
   
};

//Defination of Outside Function (:: operator)
void Hospital::printoutside()
{
    cout<<"This is Outside Function\n";
}


int main()
{
    Hospital h;
    h.printinline();                //Called Inline Function
    h.printoutside();               //Called Outside Function
}