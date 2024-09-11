#include <iostream>
using namespace std;
int main()
{
    int a[5], b[5];
    cout << "Enter (5) array elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << endl;
    cout << "Reverse array:\n";
    for (int i = 0; i < 5; i++) {
        b[i] = a[4 - i];
        cout << b[i] << ' ';
    }
    return 0;
}
