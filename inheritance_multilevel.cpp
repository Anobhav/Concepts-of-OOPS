#include <iostream>
#include <cstdlib>
using namespace std;

class Id {
protected:
    int id;

    void randomgenerator() {
        id = rand() % 10000;  
    }
};

class Name : protected Id {  
protected:
    string name;

    void nameing() {
        cout << "Enter the name: ";
        cin >> name;
        randomgenerator(); 
        cout << "ID is: " << id << endl;  
    }
};

class Salary : protected Name {  
protected:
    int sal;

    void set_sal() {
        cout << "Enter the salary: ";
        cin >> sal;
    }
};

class Display : protected Salary {  
public:
    void getDetails() {
        nameing();    
        set_sal();    
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << sal << endl;
    }
};

int main() {
    Display d;
    d.getDetails();  
    d.display();     
    return 0;
}
