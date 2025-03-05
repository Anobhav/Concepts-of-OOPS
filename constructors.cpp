#include <iostream>
using namespace std;

/* what are constructors and destructors 
speical memeber functions with same name as of the class 
used to initialize the objects of its class 
same name of the call and it automatically invoked whenever an object is created
proerties of constructor 
1. should be declared in the public section of the class 
2. same name of the class
3. invoked automatically 
4. default constructors dont take an input parameter 
5. they dont have a return type and cant return values 
6. we cant refer to its address */
class Complex{
    int a,b;
    public:
    Complex (void); // default constructor declaration 
    void printData()
    {
        cout<<"number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex :: Complex (void)
{
    a=10;
    b=0;
}
int main()
{
    Complex c;
    c.printData();
    return 0;
}