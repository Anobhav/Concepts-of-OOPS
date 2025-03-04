// what is pointer 
/*
    itt is a data type which holds the address of other datatypes 
    it can act as a reference to other variables 
*/

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int *ptr = &a; // Pointer "ptr" holds the address of "a"

    // & --> Address-of operator 
    // * --> Dereference operator 

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;  // Corrected: Printing address of a
    cout << "Value of a printed by ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;  // Additional line for clarity
    cout << "Address of ptr itself: " << &ptr << endl; // Shows where ptr is stored

    return 0;
}
