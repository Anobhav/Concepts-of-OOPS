#include <iostream>
using namespace std;

int factorial(int a )
{
    if(a<=1)
    {
        return 1;
    }
    return a* factorial(a-1);
}

int main()
{
    //factorial
    int a;
    cout<<"enter the no of which you want a factorial of: ";
    cin>>a;
    cout<<"factorial of "<<a<<" is : "<<factorial(a);
    return 0;
}