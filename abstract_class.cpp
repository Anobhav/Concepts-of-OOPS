#include <iostream>
using namespace std;
/*
    abstract class is a class which consists of a pure virtual function 
    Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it
    the class which inherits the abstract class will override the virtual function 
*/

class Base_class{
    public:
    string title;
    float rating;

    public:
        Base_class(string t, int r){
            title=t;
            rating=r;
            cout<<"title is: "<<title<<endl;
            cout<<"rating is: "<<rating<<endl;
        }
        virtual void display()=0;
};

class Derived : public Base_class{
    int price;
    public:
    Derived (string s, int rate, int p) : Base_class(s,rate)
    {
        price=p;
    }
    void display() override
    {
        cout<<"title is: "<<title<<endl;
        cout<<"rating is: "<<rating<<endl;
        cout<<"price of the movie is: "<<price;
    }
};

int main()
{
    Derived d("the wonder women",4.5, 120);
    d.display();
    return 0;
}