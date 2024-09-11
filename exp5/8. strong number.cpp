#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, fact = 1, digit;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    while (num != 0) {
        digit = num % 10;
        num /= 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
    }
    if (temp == sum) cout << "Strong number";
    else cout << "Not a strong number";
    return 0;
}
