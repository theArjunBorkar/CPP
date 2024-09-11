#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int op;
    cout << "Select a number corresponding to the area of the object you want to find\n";
    cout << "(1) Area of triangle\n";
    cout << "(2) Area of rectangle\n";
    cout << "(3) Area of circle\n";
    cout << "(4) Area of sphere\n";
    cout << "Enter your choice: ";
    cin >> op;
    double b, h, l, w, r, A, SA;
    const float pi = 3.14;
    switch(op) {
    case 1:
        cout << "Enter the base: ";
        cin >> b;
        cout << "Enter the height: ";
        cin >> h;
        A = 0.5 * (b / h);
        cout << "The area of the triangle is " << A << " sqr units";
        break;
    case 2:
        cout << "Enter the length: ";
        cin >> l;
        cout << "Enter the width: ";
        cin >> w;
        A = l * w;
        cout << "The area of the rectangle is " << A << " sqr units";
        break;
    case 3:
        cout << "Enter the radius: ";
        cin >> r;
        A = pi * pow(r, 2);
        cout << "The area of the circle is " << A << " sqr units";
        break;
    case 4:
        cout << "Enter the radius: ";
        cin >> r;
        SA = 4 * pi * pow(r, 2);
        cout << "The surface area is " << SA << " sqr units";
        break;
        default: cout << "Your choice is invalid";
    }
    return 0;
}
