#include <iostream>
using namespace std;
int main()
{
    int x, digit;
    int sum = 0;
    cout << "Enter a 4 digit number: ";
    cin >> x;
    int a;
    digit = x;
    {
        a = digit % 10;
        digit /= 10;
        sum = sum + a;


        a = digit % 10;
        digit /= 10;
        sum = sum + a;


        a = digit % 10;
        digit /= 10;
        sum = sum + a;


        a = digit % 10;
        digit /= 10;
        sum = sum + a;

    }
    cout << "The sum of digits is " << sum;
    return 0;
}
