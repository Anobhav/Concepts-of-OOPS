#include <iostream>
#include <list>
using namespace std;
// bi directional linear list which allows for effecient insertions and deletion operation 
int main()
{
    list <int> list1; // initialization of list of 0 length 
    list <int> list2(7); // initialization of list of 7 length 

    //insertion in list 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    
    list<int> ::iterator i;
    i=list1.begin(); // refers to list's first element 
    // cout << "First element is: " << *i << " Address of the first element: " << &(*i) << endl;
    // i++;
    // cout << "2nd element is: " << *i << " Address of the 2nd element: " << &(*i) << endl;
    // i++;
    // cout << "3rd element is: " << *i << " Address of the 3rd element: " << &(*i) << endl;
    // i++;
    // cout << "4th element is: " << *i << " Address of the 4th element: " << &(*i) << endl;
    // i++;
    // cout << "5th element is: " << *i << " Address of the 5th element: " << &(*i) << endl;
    int count=1;
    for(i=list1.begin(); i!=list1.end(); i++)
    {
        
        cout<<count<<" element in list is: "<<*i<<endl;
        count++;
    }

    // deletion of list element

    list1.pop_back(); // removed the last element of the list 
    list1.remove(7); // removes specific element of the list
    return 0;
}