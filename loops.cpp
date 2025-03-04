/*
    3 types of loops in c++
    1. for loops 
    2. while loop 
    3. do-while loop 
*/

#include <iostream>
using namespace std;
int main()
{
    int i=10;
    //for
    for( ; i>5; i--)
    {
        cout<<"hello "<<i<<endl;
    }
    //while
    while (i>2)
    {
        cout<<"hello by while loop: "<<i<<endl;
        i--;
    }
    //do - while 
    do{
        cout<<"hello by do - while: "<<i<<endl;
        i--;
    } while(i>-1);
    return 0;
}