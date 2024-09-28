#include <iostream>
using namespace std;
int str_len(char str[]) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
        length++;
    return length;
}
bool str_compare(char str_1[], char str_2[]) {
    for (int i = 0; str_1[i] != '\0' || str_2[i] != '\0'; i++)
        if (str_1[i] != str_2[i])
            return false;
    return true;
}
void str_copy(char str_1[], char str_2[]) {
    for (int i = 0; str_2[i] != '\0'; i++)
        str_1[i] = str_2[i];
    str_1[str_len(str_2)] = '\0';
}
void str_concat(char str_1[], char str_2[]) {
    int str_1_len = str_len(str_1);
    for (int i = 0; str_2[i] != '\0'; i++)
        str_1[str_1_len + i] = str_2[i];
    str_1[str_1_len + str_len(str_2)] = '\0';
}
void str_rev(char str_1[]) {
    int length = str_len(str_1);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char tmp = str_1[i];
        str_1[i] = str_1[j];
        str_1[j] = tmp;
    }
}
int main() {
    char str_1[100], str_2[100];
    cout << "Enter string one: ";
    cin.getline(str_1, 100);
    cout << "Enter string two: ";
    cin.getline(str_2, 100);
    cout << "Length of string one is " << str_len(str_1);
    if(str_compare(str_1, str_2))
        cout << "\nStrings are equal";
    else
        cout << "\nStrings are not equal";
    str_copy(str_1, str_2);
    cout << "\nCopied string two into string one: " << str_1;
    str_concat(str_1, str_2);
    cout << "\nConcatenated string: " << str_1;
    str_rev(str_1);
    cout << "\nReversed string is: " << str_1;
    return 0;
}
