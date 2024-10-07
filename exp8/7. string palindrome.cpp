#include <iostream>
using namespace std;
void str_pal(char *str, int size) {
    char *start = str;
    char *end = str + size - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[20], cmp[20];
    cout << "Enter a string: ";
    cin.getline(str, 20);
    int i = 0;
    while (str[i] != '\0') {
        cmp[i] = str[i];
        i++;
    }
    cmp[i] = '\0';
    str_pal(str, i);
    bool isPal = true;
    for (i = 0; cmp[i] != '\0' && str[i] != '\0'; i++) {
        if (cmp[i] != str[i])
            isPal = false;
    }
    if (cmp[i] != '\0' || str[i] != '\0') {
        isPal = false;
    }
    if (isPal) cout << "Palindrome";
    else cout << "Not a palindrome";
    return 0;
}
