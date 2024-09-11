#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    x = x * 5;
    y = x / 5;
    x = x / y;
    cout << "Now, x = " << x << " and y = " << y;
    return 0;
}
