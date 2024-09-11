#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, r1, r2;
    cout << "ax^2 + bx + c = 0\n";
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << a << "x^2 + " << b << "x + " << c << " = 0\n";
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        r1 = (-b + sqrt(d) / (2 * a));
        r2 = (-b - sqrt(d) / (2 * a));
        cout << "The roots are " << r1 << " and " << r2 << " , they are real and unequal";
    } else if (d < 0) {
        double real = ((-b ) / ( 2 * a));
        double imaginary = sqrt(d) / (2 * a);
        cout << "The roots are " << r1 << " + i and " << r2 << " - i , they are complex and unequal";
    } else if (d == 0) {
        r1 = (-b / (2 * a));
        r2 = (-b / (2 * a));
        cout << "The roots are " << r1 << " and " << r2 << " , they are real and equal";
    }
    return 0;
}
