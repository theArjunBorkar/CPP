#include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter m: ";
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> *(a + i);
    for (int i = 0; i < m; i++)
        cout << *(a + i) << ' ';
    return 0;
}
