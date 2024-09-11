#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "Array: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
