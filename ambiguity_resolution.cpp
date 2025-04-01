#include <iostream>
using namespace std;

class Morning{
    public:
    void greet()
    {
        cout<<"this is morning's greeting"<<endl;
    }
};

class Afternoon{
    public:
    void greet()
    {
        cout<<"this is Afternoon's greeting"<<endl;
    }
};

class Derived : public Morning, public Afternoon{
    public:
    void greet()
    {
        cout<<"from the derived class: ";
        Morning::greet();
    }

};

int main()
{
    Morning a;
    a.greet();
    Afternoon b;
    b.greet();
    Derived d;
    d.greet();
    return 0;
}