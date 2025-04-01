#include <iostream>
using namespace std;
// base class is the pre existing class 
// derived class is the new class which inherited 
//inheritance is of 5 types -- single -- multiple -- multilevel -- hierarchical  -- hybrid   




// example for single inheritance --->> 
class Add
{
    protected:
        int sum;
    public:
        int add(int x, int y){
            sum=x+y;
            return sum;
        }
    
};
class Calce : public Add
{
    public:

    void display()
    {
        cout<<"sum of the values is: "<<sum;
    }
};
int main()
{
    int x,y;
    cout<<"enter any 2 values"<<endl;
    cin>>x>>y;
    Calce b;
    b.add(x,y);
    b.display();
    return 0;
}