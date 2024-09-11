#include <iostream>
using namespace std;
int main()
{
    int x, last, sum = 0;
    cout << "Enter a number: ";
    cin >> x;
    last = x % 10;
    while (x >= 10) {
        x /= 10;
    }
    cout << "Sum first and last digit = " << x + last;
    return 0;
}
