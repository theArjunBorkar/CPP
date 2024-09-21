#include <iostream>
using namespace std;
int compare(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c && b > a)
        return b;
    else return c;
}
int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "The largest number is " << compare(a, b, c);
    return 0;
}
