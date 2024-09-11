#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, digit, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    do {
        digit = n % 10;
        n /= 10;
        rev = rev * 10 + digit;
    } while (n != 0);
    if (rev == temp) cout << rev << " is a palindrome";
    else cout << temp << " is not a palindrome";
    return 0;
}
