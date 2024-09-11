#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    int i = 1;
    do {
            cout << i << " ";
            i++;
    } while (i <= x);
    return 0;
}
