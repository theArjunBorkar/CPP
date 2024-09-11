#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    for (int i = 1; i <= year; i++) {
        if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) cout << i << ' ';
    }
    return 0;
}
