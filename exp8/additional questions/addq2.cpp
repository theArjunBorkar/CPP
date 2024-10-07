#include <iostream>
using namespace std;
void vowels(char *str, int &aCount, int &eCount, int &iCount, int &oCount, int &uCount) {
    while (*str != '\0') {
        char ch = *str;
        if (ch == 'a' || ch == 'A')
            aCount++;
        else if (ch == 'e' || ch == 'E')
            eCount++;
        else if (ch == 'i' || ch == 'I')
            iCount++;
        else if (ch == 'o' || ch == 'O')
            oCount++;
        else if (ch == 'u' || ch == 'U')
            uCount++;
        str++;
    }
}
int main() {
    char str[] = "Hello, world!";
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    vowels(str, aCount, eCount, iCount, oCount, uCount);
    cout << "Number of 'a' vowels: " << aCount << endl;
    cout << "Number of 'e' vowels: " << eCount << endl;
    cout << "Number of 'i' vowels: " << iCount << endl;
    cout << "Number of 'o' vowels: " << oCount << endl;
    cout << "Number of 'u' vowels: " << uCount << endl;
    return 0;
}
