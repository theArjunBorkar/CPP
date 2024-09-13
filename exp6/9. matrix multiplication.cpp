#include <iostream>
using namespace std;
int main() {
    int m, n, p, q;
    cout << "Enter 1st matrix's order (m n): ";
    cin >> m >> n;
    int a[m][n];
    cout << "Enter 1st matrix's elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cout << "Enter 2nd matrix's order (p q): ";
    cin >> p >> q;
    int b[p][q];
    cout << "Enter 2nd matrix's elements:\n";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];
    if (n != p) {
        cout << "Matrix multiplication is not possible" << endl;
        return 1;
    } else {
        int c[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                c[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << "Matrix multiplication: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << c[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
