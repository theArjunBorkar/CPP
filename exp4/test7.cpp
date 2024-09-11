#include <iostream>
using namespace std;
int main()
{
    double n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int i = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "sum = " << sum;
    return 0;
}
