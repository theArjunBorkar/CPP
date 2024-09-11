#include <iostream>
using namespace std;
int main()
{
    double x, fact = 1;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    cout << "factorial = " << fact;
    return 0;
}
