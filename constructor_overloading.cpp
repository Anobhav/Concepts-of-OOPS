#include <iostream>
using namespace std;

class Complex {
    int a;
    int b;
    public:
    Complex(int x, int y)
    {
        a=x;
        b=y;
    }
    
    Complex (int x)
    {
        a=x;
        b=0;
    }

    friend void print( Complex &c);
};

void print( Complex &c)
{
    cout<<" value of a is: "<<c.a<<endl;
    cout<<"value of b is: "<<c.b<<endl;
    cout<<endl<<endl;
};
int main()
{
    Complex c1(5,10);
    print(c1);
    Complex c2(5);
    print(c2);
    return 0;
}