//  Size of Class:- the size of a class may be greater than the sum of its data members because the compiler adds extra bytes called padding to satisfy memory alignment requirements.
// An empty class occupies 1 byte so that each object has a unique memory address.

#include<iostream>
using namespace std;
class c1{                     // Size of Empty Class is 1 (NOT 0)

};

class c2{                      // Size of Class is 12 (Perfect)
    int id;
    int number;
    int x;
};

class c3{                     // Size of Class is still 12 (NOT 9)
    int id;
    char x;
    float cgpa;
};

class c4{                     // Size of Class is 12 (NOT 6)
    char a;
   int b;
    char c;
};

class c5{                     // Size of Class is 8 (NOT 6)
    char a;
    char b;
    int c;
};


int main()
{
    c1 h1;
    cout<<sizeof(h1)<<endl;              //1

    c2 t1;
    cout<<sizeof(t1)<<endl;             //12

    c3 e1;
    cout<<sizeof(e1)<<endl;             //12

    c4 j1;
    cout<<sizeof(j1)<<endl;             //12

    c5 w;                               //8
    cout<<sizeof(w)<<endl;              

return 0;

}  
