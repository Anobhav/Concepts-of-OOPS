#include <iostream>
#include <string>
using namespace std;

/*
    OOPS ?
    c++ introduced class 
    classes - are extension of structures, it can have methods and properties. By default variables are declared as private untill and unless they are defined under pubic:   
    structures had limitations like all the members are public and didnt have support for methords, they are typedef. 

*/
/*
    what is nesting member function -- calling a function of the same class inside another function of that class 
*/

class binary {
    string s;
    public:
        void read(void);
        void chk_bin(void);
};

void binary:: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
    chk_bin();
}

void binary :: chk_bin(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!='1')
        {
            cout<<"this is not a binary"<<endl;
        }
    }
}

int main()
{
    binary b;
    b.read();
    return 0;
}