#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) {
                char lowerCH = tolower(ch);
                cout << lowerCH;
            } else cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
