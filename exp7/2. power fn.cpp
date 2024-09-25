#include <iostream>
using namespace std;
int power(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= y; i++)
        res *= x;
    return res;
}
int main()
{
    int x, y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter its power: ";
    cin >> y;
    cout << x << '^' << y << '=' << power(x, y);
    return 0;
}
