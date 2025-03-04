#include <iostream>
using namespace std;


class Numbers {
    int a, b;
public:
    void setnumber(int num1, int num2) {
        a = num1;
        b = num2;
    }

    int operation() { 
        cout << "The numbers you entered are: " << a << " and " << b << endl;
        cout << "Enter the operation to be performed:\n";
        cout << "1. Addition\n2. Multiplication\n3. Division\n4. Remainder\n";
        int x;
        cin >> x;
        return x;
    }

    friend class Calculator; 
};
class Calculator {
    public:
        void output(int x, Numbers num) {
            switch (x) {
                case 1:
                    cout << "Addition: " << num.a + num.b << endl;
                    break;
                case 2:
                    cout << "Multiplication: " << num.a * num.b << endl;
                    break;
                case 3:
                    if (num.b != 0)
                        cout << "Division: " << num.a / num.b << endl;
                    else
                        cout << "Error: Division by zero!" << endl;
                    break;
                case 4:
                    if (num.b != 0)
                        cout << "Remainder: " << num.a % num.b << endl;
                    else
                        cout << "Error: Modulo by zero!" << endl;
                    break;
                default:
                    cout << "Invalid operation selected." << endl;
            }
        }
    };
int main() {
    Numbers num;
    num.setnumber(5, 10);

    Calculator calc;
    int x = num.operation(); 

    calc.output(x, num);

    return 0;
}
