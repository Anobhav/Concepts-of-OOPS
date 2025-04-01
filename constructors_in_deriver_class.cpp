#include <iostream>
using namespace std;
/*
    if class B inherits A both have a constructor and it is a multilevel in heritance then first A will be executed then B 
    if class C inherits class A,B then order of execution will be A, B , C 
    if class C inherits Class A, virtual class B then order of execution will be B, A, C 
*/
class Base{
    int data;
    public:
        Base(int i)
        {
            data=i;
            cout<<"base class construction has been called"<<endl;
        }
        void printData()
        {
            cout<<"The value of data is: "<<data<<endl;
        }
};

class Base2{
    int data2;
    public:
    Base2(int i)
    {
        data2=i;
        cout<<"base2 class construction has been called"<<endl;
    }
    void printData()
    {
        cout<<"The value of data is: "<<data2<<endl;
    }
};

class Derived : public Base, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b,int c, int d): Base(a), Base2(b){
            derived1=c;
            derived2=d;
            cout<<"derived class constructor called"<<endl;
        }
        void printData(void)
        {
            cout<<"The value of derived1, derived2 is: "<<derived1<<" "<<derived2<<endl;
        }
};
int main()
{
    Derived d(1,2,3,4);
    d.printData();
    Base b1(10);
    b1.printData();
    Base2 b2(20);
    b2.printData();
    return 0;
}