#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    float x=455;
    float y=x;    //it is a reference variable which refers to x 
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;


    //typecasting 
    int a = 45;
    cout << "Size of a: " << sizeof(a) << " | Type: " << typeid(a).name() << endl;

    float b = (float)a;
    cout << "Value of b: " << b << " | Type: " << typeid(b).name() << endl;
}