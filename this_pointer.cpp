#include <iostream>
using namespace std;
class Base{
    int a;
    public:
    void set_data(int a){
        this->a=a; // this is used to point to the current context it is used to initialize the member function 
    }
    void getData()
    {
        cout<<"the data set is: "<<a<<endl;
    }
};
int main()
{
    Base a;
    a.set_data(10);
    a.getData();
    return 0;
}