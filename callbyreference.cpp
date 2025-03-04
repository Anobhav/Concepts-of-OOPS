#include <iostream>
using namespace std;

void swap(int &a, int &b )
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<"value of a: "<<a<<" value of b: "<<b<<endl;
    swap(a,b);
    cout<<"value of a: "<<a<<" value of b: "<<b<<endl;
    // call by reference sends the address or a reference to the function 
    return 0;
}