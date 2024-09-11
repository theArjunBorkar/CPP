#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter 5 1D array elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << "Even array elements: ";
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) cout << a[i] << ' ';
    }
    cout << "\nOdd array elements: ";
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 != 0) cout << a[i] << ' ';
    }
    return 0;
}
