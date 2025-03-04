#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"enter id:";
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"id is: "<<id<<" count is: "<<count<<endl;
    }
};

int Employee :: count; //defualt value is zero 



int main()
{
    Employee anobhav;
    anobhav.setdata();
    anobhav.getdata();
    
    Employee rad;
    rad.setdata();
    rad.getdata();
    return 0;
}