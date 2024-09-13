#include <iostream>
using namespace std;
int main()
{
    int a[3][3], comp = a[2][2];
    cout << "Enter (3x3) array elements: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
                if (a[i][j] > comp)
                cout << a[i][j] << " is the largest element";
        }
    }
    return 0;
}
