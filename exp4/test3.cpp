#include <iostream>
using namespace std;
int main()
{
    double x, sum = 0;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 0; i <= x; i++) {
        sum += i;
    }
    cout << "sum = " << sum;
    return 0;
}
