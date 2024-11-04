#include <iostream>
using namespace std;
class rectangle {
protected:
    double length, width;
public:
    rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};
class box : protected rectangle {
private:
    double depth;
public:
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
