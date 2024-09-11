#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    int i = 1;
    while (i <= x) {
        cout << i << " ";
        i++;
    }
    return 0;
}
