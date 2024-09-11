#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter side a of triangle: ";
    cin >> a;
    cout << "Enter side b of triangle: ";
    cin >> b;
    cout << "Enter side c of triangle: ";
    cin >> c;
    if ((a + b < c) or (b + c < a) or (c + a < b)) {
        cout << "The triangle is invalid";
    } else if (a == b && b == c && c == a) {
        cout << "It is an equilateral triangle";
    } else if ((a == b) || (b == c) || (c == a)) {
        cout << "It is an isosceles triangle";
    } else cout << "It is a scalene triangle";
    return 0;
}
