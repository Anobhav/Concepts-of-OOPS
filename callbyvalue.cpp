#include <iostream>
using namespace std;

void swap(int a, int b)  // Call by Value
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function - a: " << a << ", b: " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    cout << "Before calling swap - a: " << a << ", b: " << b << endl;

    swap(a, b);  // Passing by value

    cout << "After calling swap - a: " << a << ", b: " << b << endl;  // Values remain unchanged

    return 0;
}
