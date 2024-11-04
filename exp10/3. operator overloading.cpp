#include <iostream>
using namespace std;
class Complex {
    double real, imaginary;
public:
    Complex() {
        real = imaginary = 0;
    }
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    Complex c1(2.5, 3.5), c2(4.5, 5.5);
    cout << "Complex number 1: ";
    c1.show();
    cout << "Complex number 2: ";
    c2.show();
    Complex cA = c1 + c2;
    cout << "Addition of both: ";
    cA.show();
    return 0;
}
