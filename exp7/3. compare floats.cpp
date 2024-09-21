#include <iostream>
using namespace std;
double largest(double a, double b, double c)
{
    if (a > b && a > c)
        return a;
    else if (b > c && b > a)
        return b;
    else return c;
}
int main()
{
    double a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "The largest number is " << largest(a, b, c);
    return 0;
}
