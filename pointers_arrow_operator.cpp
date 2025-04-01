#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex; // special syntax of c++
    (*ptr).setData(1, 54); // or ptr ->setData(1,54)
    (*ptr).getData();    

    Complex *ptr2=new Complex;
    ptr2->setData(10,20);
    ptr2->getData();
    return 0;
}