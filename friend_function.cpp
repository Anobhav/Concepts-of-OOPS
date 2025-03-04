#include <iostream>
using namespace std;
/*
    properties of friend function 
    1. allows a non member of the class to use private variables of the class
    2. since friend function is not in the scope of the class it cannot be called from the object of that class
    3. can be invoked without help of any object 
    4.  usually contains objects as arguments 
    5. it cannot access memebers directly by their names and need object_name.member_name to access them 
*/
class Complex{
    int a,b;
    public:
        void setNumber(int num1, int num2)
        {
            a=num1;
            b=num2;
        }
        void printnumber()
        {
            cout<<"number is: "<<a<<"+"<<b<<"i"<<endl;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex (Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber(o1.a + o2.a,o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);

    c1.printnumber();
    c2.printnumber();
    
    sum=sumComplex(c1,c2);
    sum.printnumber();
    return 0;
}