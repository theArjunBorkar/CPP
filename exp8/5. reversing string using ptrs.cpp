#include <iostream>
using namespace std;
int main() {
    char wrd[] = "Hello World";
    char *ptr = wrd;
    while (*ptr) {
        ptr++;
    }
    while (ptr >= wrd) {
        cout << *ptr;
        ptr--;
    }
    return 0;
}
