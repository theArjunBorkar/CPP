#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[100] = "HelloWorld";
    char s2[100] = "Hello";
    char ch = 'o';
    int n = 4;
    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "Length of 1: " << strlen(s1) << endl;
    cout << "Reversed 1: " << strrev(s1) << endl;
    cout << "Lowercase 1: " << strlwr(s1) << endl;
    cout << "Uppercase 1: " << strupr(s1) << endl;
    strcpy(s1, s2);
    cout << "Copy string 2 to string 1: " << s1 << endl;
    strncpy(s1, "World", n);
    cout << "Copy n characters from World to string 1: " << s1 << endl;
    strcat(s1, s2);
    cout << "Concatenate string 2 to string 1: " << s1 << endl;
    strncat(s1, "World", n);
    cout << "Concatenate n characters of World to string 1: " << s1 << endl;
    cout << "Comparison of string 1 and string 2: " << strcmp(s1, s2) << endl;
    cout << "Comparison of 1st n characters of string 1 and string 2: " << strncmp(s1, s2, n) << endl;
    cout << "Character '" << ch << "' in string 1: " << strchr(s1, ch) << endl;
    cout << "Last occurrence of character '" << ch << "' in string 1: " << strrchr(s1, ch) << endl;
    return 0;
}
