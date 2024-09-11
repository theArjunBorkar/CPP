#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--) {
        for (int k = 5; k >= i; k--) {
            cout << ' ';
        }
        cout << '*';
        for (int j = i; j >= 1; j--) {
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
