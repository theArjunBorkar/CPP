#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int a[5], A[3][3], m = 5;
    cout << "Enter 1D array elements:\n";
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (i = 0; i < 5; i++) {
        a[i] *= m;
    }
    cout << "Array:\n";
    for (i = 0; i < 5; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
    cout << "\nEnter 2D array elements:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter value of " << "(" << i << "," << j << "): ";
            cin >> A[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] *= m;
        }
    }
    cout << "Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << ' ';
        }
    }
    cout << endl;
    return 0;
}
