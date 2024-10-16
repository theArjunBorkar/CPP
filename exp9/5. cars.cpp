#include <iostream>
using namespace std;
class car {
private:
    char model[10];
    char brand[10];
    int year;
public:
    void start() {
        cout << brand << ' ' << model <<  " has started" << endl;
    }
    void stop() {
        cout << brand << ' ' << model << " has stopped";
    }
    void input() {
        cout << "Enter car's brand: ";
        cin >> brand;
        cout << "Enter car's model: ";
        cin >> model;
        cout << "Enter car's year: ";
        cin >> year;
    }
    void output() {
        start();
        stop();
    }
};
int main() {
    car urCar;
    urCar.input();
    urCar.output();
    return 0;
}
