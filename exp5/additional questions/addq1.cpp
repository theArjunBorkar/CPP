#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++) {
        cout << "Table of " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << 'x' << j << '=' << i * j;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
