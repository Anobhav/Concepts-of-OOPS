#include <iostream>
using namespace std;

// entified from which objects are created. it defines attributes and behaviors that the objects of the class can have 
// classes enable data hiding which is not possible in structure 

class this_is_classname {
private:
    int salary; // Private data member

public:
    string name; // Public data member

    // Function declaration (without definition)
    void setdata(string emp_name, int emp_salary);

    // Function to display data
    void getData() {
        cout << "Name of the employee: " << name << ", Salary: " << salary << endl;
    }
};

// Function definition outside the class
void this_is_classname::setdata(string emp_name, int emp_salary) {
    name = emp_name;  // Assign value to name
    salary = emp_salary;  // Assign value to salary
}

int main() {
    this_is_classname Anobhav;

    // Setting data
    Anobhav.setdata("Anobhav", 10000000);

    // Displaying data
    Anobhav.getData();

    return 0;
}
