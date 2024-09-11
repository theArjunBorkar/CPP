#include <iostream>
using namespace std;
int main()
{
    double x, y;
    int op;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the number corresponding to your choice of mathematical operation\n";
    cout << "(1) Addition\n";
    cout << "(2) Subtraction\n";
    cout << "(3) Multiplication\n";
    cout << "(4) Division\n";
    cout << "Enter your operation (number): ";
    cin >> op;
    switch(op) {
        case 1: cout << x << "+" << y  << "=" << x + y;
        break;
        case 2: cout << x << "-" << y  << "=" << x - y;
        break;
        case 3: cout << x << "*" << y  << "=" << x * y;
        break;
        case 4:
            if (y == 0) {
                    cout << "Number cannot be divided by 0";
            } else  cout << x << "/" << y  << "=" << x / y;
        break;
        default: cout << "Your choice is invalid";
    }
    return 0;
}
