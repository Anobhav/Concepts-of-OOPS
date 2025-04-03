#include <iostream>
#include <map> // Include the map library
// map is an associative array 

using namespace std;

int main()
{
    map<string, int> marksmap; // Correct declaration of map
    
    marksmap["Anobhav"] = 99;
    marksmap["Jack"] = 69;
    marksmap["Rohan"] = 100;
    
    // Displaying the map contents
    for (auto &entry : marksmap)
    {
        cout << entry.first << " -> " << entry.second << endl;
    }

    return 0;
}
