#include <iostream>
using namespace std;
// virtual base class helps from ambiguity and duplicacy

class A{
    public: 
    int a;
    int b;

    void set_data()
    {
        cout<<"enter values of a and b: "<<endl;
        cin>>a>>b;
    }
};

class B:  virtual public A{
    public:
    void getdata()
    {
        cout<<"value of a is: "<<a<<endl;
        cout<<"value of b is: "<<b;
    }
};

class C: virtual public A{
    public:
    void getdata()
    {
        cout<<"value of a is: "<<a<<endl;
        cout<<"value of b is: "<<b;
    }
};

class D: public B, public C{
    public:
    void display()
    {
        set_data();
        cout<<"the values entered of a and b were: "<<a<<" "<<b;
    }
};
int main()
{
    D obj1;
    obj1.display();
    return 0;
}