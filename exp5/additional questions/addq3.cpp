#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1, n2, digit, temp, sum = 0, cnt = 0;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    for (int i = n1; i <= n2; i++) {
        temp = n1;
        cnt = 0;
        sum = 0;
        while (temp != 0) {
            temp /= 10;
            cnt++;
        }
        temp = n1;
        sum = 0;
        do {
            digit = temp % 10;
            sum += pow(digit, cnt);
            temp /= 10;
        } while (temp != 0);
        if (sum == i) cout << n1 << ' ';
    }
    return 0;
}
