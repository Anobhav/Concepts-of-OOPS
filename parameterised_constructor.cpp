#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex (int a,int b);
    void print()
    {
        cout<<"default values of a and b are: "<<a<<" "<<b<<endl;
    }
};
// Complex :: Complex(void) // default constructor doesnt take any values 
// {
//     a=0;
//     b=0;
// }
Complex :: Complex(int x, int y) // this is a parameterised constructor
    {
        a=x;
        b=y;
    }
int main()
{
    // there are 2 ways to pass arguments to the constructor 
    //implicit call and explicit call 
    // example of implicit call 
    Complex a(4,6);
    a.print();
    // example of implicit call
    Complex b = Complex (5,7);
    b.print();
    return 0;
}