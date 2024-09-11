#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++) {
        for (int k = 6; k >= i; k--) {
            cout << ' ';
        }
        cout << '*';
        for (int j = 6; j <= i; j++) {
            cout << ' ';
        }
        cout << endl;
        if (i == 3) {
            for (int a = 1; a <= 6; a++) {
                cout << ' ' << '*';
            }
        }
    }
    return 0;
}
