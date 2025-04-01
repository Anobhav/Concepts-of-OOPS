#include <iostream>
using namespace std;

// multiple inheritance -->>
class Add
{
    protected:
        int s1;
    public:
        int add(int x, int y){
            s1=x+y;
            return s1;
        }
    
};

class Sub
{
    protected:
        int s2;
    public:
        int sub(int x, int y){
            s2=x-y;
            return s2;
        }
    
};
class Calce : public Add, public Sub
{
    public:

    void displayadd()
    {
        cout<<"addition of the values is: "<<s1<<endl;
    }
    void displaysub()
    {
        cout<<"subtraction of the values is: "<<s2;
    }
};
int main()
{
    int x,y;
    cout<<"enter any 2 values"<<endl;
    cin>>x>>y;
    Calce b;
    b.add(x,y);
    b.sub(x,y);
    b.displayadd();
    b.displaysub();
    return 0;
}