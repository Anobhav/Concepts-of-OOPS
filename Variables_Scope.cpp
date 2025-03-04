#include <iostream>
using namespace std;

// Understanding variables and scope 

int globalvar =6;
void sum(){
    int a;
    cout<<globalvar;
    // this prints the 6 becz first it find globalvar inside the sum function if not it will print the globalvar value.
}
int main()
{
    int a = 4;
    int b = 5;
    int c = 10, d = 15;
    float pi=3.14;
    char x='d';
    bool o=true;

    int globalvar=10;

    
    cout << "This is a: " << a << ", This is b: " << b << ", This is c: " << c << ", This is d: " << d << endl;
    cout<<"value of pi is:"<<pi<<endl;
    cout<<"this is a character x: "<<x<<endl;
    cout<<"boolean varibale o: "<<o<<endl;

    cout<<"globalvar is holding value: "<<globalvar; //this is because local variable takes presidence over the global variable

    cout<<"executing sum function: ";
    sum();
    return 0;
}
