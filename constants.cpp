//constants in c++ can be used to fix the values of a variable 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int a=5;
    cout<<"value of a: "<<a<<endl;
    // a=10;   //error because const makes read only variables 
    // cout<<"value of a now: "<<a<<endl; 
    int b=5,c=10,d=15;
    cout<<"without set1 value of a: "<<a<<endl;
    cout<<"without set1 value of b: "<<b<<endl;
    cout<<"without set1 value of c: "<<c<<endl;
    //setw takes a value k 
    //setw(k)
    // k is the no of spaces it leaves, can be used to right justify 
    cout<<"with set1 value of a: "<<setw(4)<<a<<endl;
    cout<<"with set1 value of b: "<<setw(4)<<b<<endl;
    cout<<"with set1 value of c: "<<setw(4)<<c<<endl;
    return 0;
}