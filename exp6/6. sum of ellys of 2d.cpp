#include <iostream>
using namespace std;
int main()
{
    int a[3][3], sum = 0;
    cout << "Enter (3x3) array elements: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }
    cout << "Sum of elements = " << sum;
    return 0;
}
