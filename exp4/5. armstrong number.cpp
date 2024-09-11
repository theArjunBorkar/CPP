#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, digit, temp, sum = 0, cnt = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        temp /= 10;
        cnt++;
    }
    temp = n;
    do {
        digit = temp % 10;
        sum += pow(digit, cnt);
        temp /= 10;
    }
    while (temp != 0);
    if (sum == n) cout << "It is an Armstrong number";
    else cout << "It is not an Armstrong number";
    return 0;
}
