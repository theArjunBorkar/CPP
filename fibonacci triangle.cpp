#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else if (n < 0)
        return 0;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int triangle(int n) {
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << ' ';
    return fibonacci(n);
}
int main() {
    int n = 8;
    for (int i = 0; i < n; i++) {
        triangle(i);
        cout << endl;
    }
    return 0;
}
