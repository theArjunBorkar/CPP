#include <iostream>
using namespace std;
int main()
{
    {
    double x, fact = 1;
    cout << "Enter a number: ";
    cin >> x;
    int i = 1;
    while (i <= x) {
        fact *= i;
        i++;
    }
    cout << "factorial = " << fact;
    return 0;
}
}
