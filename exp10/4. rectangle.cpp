#include <iostream>
using namespace std;
class rectangle {
public:
    double length, width;
    rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};
class box : public rectangle {
public:
    double depth;
    box(double l, double w, double d) : rectangle(l, w) {
        depth = d;
    }
    double area() {
        return length * width * depth;
    }
};
int main() {
    rectangle r(5.0, 10.0);
    box b(5.0, 10.0, 15.0);
    cout << "Area of rectangle = " << r.area() << endl;
    cout << "Volume of rectangle = " << b.area() << endl;
    return 0;
}
