#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++) {
        char ch = 'C';
        for (int j = 3; j >= i; j--) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}
