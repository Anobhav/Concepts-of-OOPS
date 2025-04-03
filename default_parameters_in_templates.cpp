#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Adding{
    public:
    T1 a;
    T2 b;
    
    Adding(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"value of a is: "<<a<<endl;
        cout<<"value of b is: "<<b<<endl;
    }
};
int main()
{
    Adding <> one(5,5.5);       // since default arguments already set we dont need to specify it 
    one.display();
    Adding <float>two(6.6,7.7); // float is not a default argument so we had to specify it 
    two.display();
    return 0;
}