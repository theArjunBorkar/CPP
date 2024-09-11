#include <iostream>
using namespace std;
int main()
{
    int x[3][3], sum = 0;
    cout << "Select array elements (3x3 array):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter value of " << "(" << i << "," << j << "): ";
            cin >> x[i][j];
        }
    }
    cout << "Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << x[i][j] << ' ';
        }
        cout << endl;
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += x[i][j];
            cout << '+';
            cout << x[i][j];
        }
    }
    cout << '=';
    cout << sum;
    return 0;
}
