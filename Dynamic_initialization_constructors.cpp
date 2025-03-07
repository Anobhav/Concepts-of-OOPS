#include <iostream>
using namespace std;

class BkDeposit {
    int principal;
    int time;
    float intrate;
    float returnVal;

public:
    BkDeposit() {
        principal = 0;
        time = 0;
        intrate = 0;
        returnVal = 0;
    }

    BkDeposit(int p, int y, float r);
    BkDeposit(int p, int y, int r);

    void display() {
        cout << endl;
        cout << "Principal amount: " << principal << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Rate of interest: " << intrate << endl;
        cout << "Return value: " << returnVal << endl;
    }
};

BkDeposit::BkDeposit(int p, int y, float r) {
    principal = p;
    time = y;
    intrate = r;

    returnVal = principal;
    for (int i = 0; i < time; i++) {
        returnVal = returnVal * (1 + intrate);
    }
}

BkDeposit::BkDeposit(int p, int y, int r) {
    principal = p;
    time = y;
    intrate = float(r) / 100;  

    returnVal = principal;
    for (int i = 0; i < time; i++) {
        returnVal = returnVal * (1 + intrate); 
    }
}

int main() {
    BkDeposit b1(1000, 5, 4.5f);  // Using float interest rate
    b1.display();

    BkDeposit b2(1000, 5, 4);  // Using integer interest rate
    b2.display();

    return 0;
}
