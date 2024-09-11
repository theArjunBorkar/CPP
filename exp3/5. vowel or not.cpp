#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        char lowerLetter = tolower(letter);
        switch(lowerLetter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout << letter << " is a vowel";
        break;
        default: cout << letter << " is not a vowel";
    }
    } else cout << letter << " is not a letter";
    return 0;
}
