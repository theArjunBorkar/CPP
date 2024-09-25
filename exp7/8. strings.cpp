#include <iostream>
using namespace std;
int str_len(char str[]) {
    int length = 0;
    for (int i = 0; i != '\0'; i++)
        length++;
    return length;
}
void str_compare(char str_1[], char str_2[]) {
    for (int i = 0; i != '\0'; i++)
        for (int j = 0; j != '\0'; j++)
            if (str_1[i] = str_2[j])
                cout << "The strings are equal";
            else cout << "The strings are not equal";
}
