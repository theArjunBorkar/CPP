#include <iostream>
using namespace std;
void str_rev(char *str, int size) {
    char *start = str;
    char *end = str + size;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[20];
    cout << "Enter a string: ";
    cin.getline(str, 20);
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    str_rev(str, i - 1);
    cout << "Reversed string: " << str;
    return 0;
}
