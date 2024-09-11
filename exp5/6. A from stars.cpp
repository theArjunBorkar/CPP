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
            for (int a = 1; a <= i - 1; a++) {
                cout << '*' << ' ';
            }
        } else if (i == 1) {
            for (int a = 1; a <= i - 2; a++) {
                cout << '*';
            }
        } else {

        }
    }
    return 0;
}
