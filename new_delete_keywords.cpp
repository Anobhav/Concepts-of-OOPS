#include <iostream>
using namespace std;
int main()
{
    int a=4;
    int *ptr= &a;
    cout<<" ptr "<<ptr<<endl;    // prints the address of the variable stored in the pointer 
    cout<<" &ptr "<<&ptr<<endl;  // prints the address of the pointer 
    cout<<" *ptr "<<*ptr<<endl;  // prints the value stored in the container whose address is stored in the ptr
    cout<<" &a "<<&a<<endl;      // prints the address of the variable 
    

    //new keyword
    int *p=new int(40); // dynamic initialization, 
    cout<<"address of p is: "<<&p<<endl; // address of point 
    cout<<"value of p is: "<<*p<<endl;   // value stored in the point 
    cout<<"address of the value stored in p is "<<p<<endl; // address of the variable stored in p 

    /*
    dynamic initialization for contigious block of memrory 
        int *arr = new int [3];
        arr[0]=1;
        arr[1]=2;
        arr[3]=3;
    */
    delete p; // used to free up memory 
    return 0;
}