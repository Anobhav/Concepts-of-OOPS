#include <iostream>
using namespace std;
//inline functions help save time. the compiler replaces the code of the function at all the places where the function is called
//but if the function is big then inline will cost a lot of memory
// don't use inline for recursion function or if there is static variables in the function 
inline int product(int a,int b)
{
    int c=a*b;
    return c;
}

int main()
{
    int a,b;
    cout<<"enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<"product of a and b is: "<<product(a,b);
    return 0;
}