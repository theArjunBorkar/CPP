#include <iostream>
using namespace std;
int main()
{
    int x, digit;
    int rev = 0;
    cout << "Enter a 4 digit number: ";
    cin >> x;
    int a;
    digit = x;
    {
        a = digit % 10;
        digit /= 10;
        rev = rev * 10 + a;

        a = digit % 10;
        digit /= 10;
        rev = rev * 10 + a;

        a = digit % 10;
        digit /= 10;
        rev = rev * 10 + a;

        a = digit % 10;
        digit /= 10;
        rev = rev * 10 + a;
    }
    cout << "The reverse is " << rev;
    return 0;
}
