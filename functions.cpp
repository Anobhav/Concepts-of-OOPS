#include <iostream>
using namespace std;

//functions is used in top down strucuted programming ie it breaks down the program and is used to carry out different functions or work 

int sum ( int a, int b)
{
    return a+b;
}

void display(int &res)
{
    cout<<"sum of 2 numbers is: "<<res;
}

int main()
{
    int a,b;
    cout<<"enter the number for which you want them sum"<<endl;
    cin>>a>>b;
    int res=sum(a,b);
    display(res);
    return 0;
}