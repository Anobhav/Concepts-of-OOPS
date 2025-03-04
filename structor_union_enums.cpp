#include <iostream>
using namespace std;

struct employee // user defined datatype which entities areof different types 
{
    int empid;
    float salary;
}; // i can also write ep which will work as a reference so that instead of employee i only need to write ep

union money // allows for shared memory between different datatypes declared
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    struct employee Radhika; //struct ep Radhika;
    struct employee Anobhav; //struct ep Anobhav;

    Anobhav.empid=1;
    Anobhav.salary=1000000;

    Radhika.empid=2;
    Radhika.salary=1000000;

    cout<<Anobhav.empid<<endl;
    cout<<Radhika.empid<<endl;

    union money m1;
    m1.rice=34;
    // m1.car='c'; this will give an error becz at a time in union we can only use one entitiy 
    cout<<m1.rice<<endl;

    enum Meal { breakfast, lunch, dinner}; // enum is datatype which can be used to assign 0,1,2... values 
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    return 0;
}