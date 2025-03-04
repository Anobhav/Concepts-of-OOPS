#include <vector>
#include <iostream>
using namespace std;
int main()
{
    //arrays - used to store a collection of items in contigious memory location of similar data types. 

    vector<int> arr(5,0); // array of size 5 with initial value set to 0
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //index is the position at which an element is stored. it starts from 0 always 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    //manuplating values with the help of indexing 
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //pointers and arrays 
    int arr2[5]={1,2,3,4,5};
    int* p= arr2;
    cout<<"value of arr2's first block is: "<<p<<endl;
    cout<<"value of arr2's 2nd block is: "<<p+4<<endl;
    cout<<"value of arr2's 3rd block is: "<<p+8<<endl;
    return 0;
}