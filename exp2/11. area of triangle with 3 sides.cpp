#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter the 1st side: ";
    cin >> a;
    cout << "Enter the 2nd side: ";
    cin >> b;
    cout << "Enter the 3rd side: ";
    cin >> c;
    if ((a + b < c) or (b + c < a) or (c + a < b)) {
        cout << "The triangle is invalid";
    } else {
    cout << "The triangle is valid";
    double area, semiP;
    semiP = (a + b + c) / 2;
    area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
    cout << "\nThe area of the triangle is " << area;
    }
    return 0;
}
