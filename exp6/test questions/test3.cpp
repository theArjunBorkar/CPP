#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout << "Select array elements (3x3 array):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter value of " << "(" << i << "," << j << "): ";
            cin >> a[i][j];
        }
    }
    cout << "Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
