//control structure -used to determine the flow of a program 

// control structure is of 3 types 
/*
    1) sequence structure
    2) selection structure 
    3) loop structure 
*/
/*
    implementation of control strucutre can be done by = if-else, if-else ladder, switch case;
*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"you're not allowed"<<endl;
    }
    else if(age==18)
    {
        cout<<"congratuations on turning 18";
    }
    //if i dont comment the following else if then this code will be if else ladder
    // else if(age<1)
    // {
    //     cout<<"you are not born yet";
    // }
    else
    {
        cout<<"You are old enough to come";
    }
    return 0;
}