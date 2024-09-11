#include <iostream>
using namespace std;
int main()
{
    int x, a, digit, rev = 0;
    cout << "Enter the number: ";
    cin >> x;
    a = x;
    while (a != 0) {
        digit = a % 10;
        rev = rev * 10 + digit;
        a /= 10;
    }
    cout << "The reverse is " << rev;
    return 0;
}
