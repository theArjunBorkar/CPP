#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++) {
        for (int k = 5 - i; k >= 1; k--) {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}
