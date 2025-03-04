#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<< " 1-red , 2- green, 3- blue"<<endl;
    cout<<"select your favour colour"<<endl;
    cin>>a;
    switch (a)
    {
        case 1:
        cout<<"your fav color is red";
        break;

        case 2:
        cout<<"your favour colour is green";
        break;

        case 3:
        cout<<"your favour colour is blue";
        break;
        
    }
    return 0;
}