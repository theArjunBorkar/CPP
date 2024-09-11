#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Enter a number: ";
    cin >> x;
    int i = 1;
    while (i <= x) {
        sum += i * i;
        i++;
    }
    cout << sum;
    return 0;
}
