#include <iostream>
using namespace std;
int main()
{
    int i=0;
    for(; i<10; i++)
    {
        cout<<i<<endl;
        if(i==3)
        {
            break;
        }
    }
    for (int i = 1; i <= 10; i++) { 
  
        // If i is equals to 4, 
        // continue to next iteration 
        // without printing 
        if (i == 4 ||i == 5||i == 6||i == 7) 
            continue; 
  
        else
            // otherwise print the value of i 
            cout << i << " "; 
    } 
    return 0;
}
