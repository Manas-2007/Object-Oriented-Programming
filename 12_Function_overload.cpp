#include<iostream>
#include<cmath>
using namespace std;
class Math{
    public:
    //Function 1 to calcuate product of two numbers
    float operation(int a,int b)
    {
        cout<<"Function 1 Result: PRODUCT = "<<a*b<<"\n";
    }

    //Function 1 again creating but for addition of two numbers
    float operation(int n)
    {
        cout<<"Function 2 Result: SQUARE ROOT OF "<<n<<" is "<<sqrt(n)<<"\n";
    }
};
int main()
{
    Math m;
    m.operation(10,5);
    m.operation(78);

    return 0;
}
