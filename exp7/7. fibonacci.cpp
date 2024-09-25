#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else if (n < 0)
        return -1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int print(int n) {
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << ' ';
    return fibonacci(n);
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "First " << n << " fibonacci numbers: ";
    cout << print(n);
    return 0;
}
