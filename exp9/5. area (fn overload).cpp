#include <iostream>
using namespace std;
class shapes {
    double area;
public:
    void calArea(double length, double width) {
        area = length * width;
        cout << "Area of rectangle: " << area << endl;
    }
    void calArea(double side) {
        area = side * side;
        cout << "Area of square: " << area;
    }
};
int main() {
    shapes quad;
    quad.calArea(10, 5);
    quad.calArea(10);
    return 0;
}
