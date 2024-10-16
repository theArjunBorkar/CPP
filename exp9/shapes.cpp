#include <iostream>
using namespace std;
class shape {
private:
    double radius;
    double length;
    double width;
    double base;
    double height;
public:
    void circle() {
        cout << "Enter radius of circle: ";
        cin >> radius;
        cout << "Radius: " << radius << endl;
        double area = 3.14 * radius * radius;
        cout << "Area: " << area << endl;
    }
    void rectangle() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        double area = length * width;
        cout << "Area: " << area << endl;
    }
    void triangle() {
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
        double area = 0.5 * base * height;
        cout << "Area: " << area << endl;
    }
};
int main() {
    shape sh;
    sh.circle();
    sh.rectangle();
    sh.triangle();
    return 0;
}
