#include <iostream>
using namespace std;
void vowel_cnt(int *str[]) {
    int Acnt = 0, Ecnt = 0, Icnt = 0, Ocnt = 0, Ucnt = 0;
    int i = 0;
    while (*str) {
        switch (tolower(*str)) {
        case 'a': Acnt++;
        case 'e': Ecnt++;
        case 'i': Icnt++;
        case 'o': Ocnt++;
        case 'u': Ucnt++;
    }
}
int main() {
    char str[20];
    cout << "Enter a word: ";
    cin.getline(str, 20);
    vowel_cnt(str);
    cout << Acnt;
}
