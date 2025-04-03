#include <iostream>
using namespace std;

template <class T>
class Display
{
public:
    T data;
    Display(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Display<T> :: display(){
    cout<<data<<endl;
}
int main()
{
    Display <int> h(5);
    h.display();
    Display <float> a(5.5);
    a.display();
    return 0;
}