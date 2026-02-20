#include<iostream>
using namespace std;
class Complex{
    public:
    int real,imaginary;

    //Default constructor
    Complex()
    {
        real=0;
        imaginary=0;
    }

    //Parameterised constructor
    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }

    //Operator overloading (+ operator)
    Complex operator +(Complex x)
    {
        Complex result;
        result.real=real+x.real;
        result.imaginary=imaginary+x.imaginary;
        return result;
    }

    //Operator overloading (- operator)
    Complex operator -(Complex x)
    {
        Complex result;
        result.real=real-x.real;
        result.imaginary=imaginary-x.imaginary;
        return result;
    }

    //Operator overlaoding (* operator)
    Complex operator *(Complex x)
    {
        Complex result;
        int answer;
        result.real=real * x.real;
        result.imaginary=imaginary * x.imaginary;
        result.imaginary=(-1)*result.imaginary;
        answer=result.imaginary+result.real;
        
        cout<<"THE PRODUCT OF COMPLEX NUMBER IS : "<<answer<<"\n";
    }
    
    //Output function
    void display()
    {
        cout<<"RESULT : : "<<real<<" + i"<<imaginary<<"\n";
    }
};
int main()
{
    Complex c1(12,45);
    Complex c2(5,2);
    Complex c3=c1+c2; 
    Complex c4=c1-c2;
    Complex c5=c1*c2;
    c3.display();
    c4.display();
    return 0;
}