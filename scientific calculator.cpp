#include <iostream>
#include <cmath>
using namespace std;
double n1, n2;
double add(double n1, double n2)
{
    return n1 + n2;
}
double sub(double n1, double n2)
{
    return n1 - n2;
}
double mul(double n1, double n2)
{
    return n1 * n2;
}
double div(double n1, double n2)
{
        return n1 / n2;
}
double pwr(double n1, double n2)
{
    return pow(n1, n2);
}
double mod(int n1, int n2)
{
    return n1 % n2;
}
int main()
{
    int op;
    cout << "Select a number corresponding to the mathematical operation you want to execute\n";
    cout << "(1) addition\n";
    cout << "(2) subtraction\n";
    cout << "(3) multiplication\n";
    cout << "(4) division\n";
    cout << "(5) power of a number\n";
    cout << "(6) modulus of a number\n";
    cout << "Select the operation of your choice: ";
    cin >> op;
    if (op >= 1 && op <= 6)
    {
        cout << "Enter the first number: ";
        cin >> n1;
        cout << "Enter the second number: ";
        cin >> n2;
    }
    else cout << "The operation you selected is not valid";
    switch (op)
    {
        case 1: cout << n1 << "+" << n2 << "=" << add(n1, n2);
        break;
        case 2: cout << n1 << "-" << n2 << "=" << sub(n1, n2);
        break;
        case 3: cout << n1 << "*" << n2 << "=" << mul(n1, n2);
        break;
        case 4: if (n2 != 0)
        {
            cout << n1 << "/" << n2 << "=" << div(n1, n2);
        }
        else cout << "Number cannot by divided by 0";
        break;
        case 5: cout << n1 << "^" << n2 << "=" << pwr(n1, n2);
        break;
        case 6: if (n2 != 0)
        {
            cout << n1 << "%" << n2 << "=" << mod(n1, n2);
        }
        else cout << "Number cannot be divided by 0";
        break;
        return 0;
    }
}
