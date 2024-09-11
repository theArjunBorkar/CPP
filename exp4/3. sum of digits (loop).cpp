#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> digit;
    do {
        n = digit % 10;
        digit /= 10;
        sum += n;
    }
    while (digit != 0);
    cout << "Sum of digits is " << sum;
    return 0;
}
