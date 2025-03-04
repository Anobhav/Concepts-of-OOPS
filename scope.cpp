#include <iostream>
using namespace std;

int c=50;

int main()
{
    int a,b,c;
    cout<<"enter the values for a,b"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"the sum of a+b = "<<c<<endl;
    cout<<"global c is "<<::c<<endl; // ::  it is called scope resolution operator. it is used to point to global variable 
    float d=34.4;
    long double e=34.4;
    cout<<"value of d is "<<d<<"the value of e is "<<e;
    return 0;
}