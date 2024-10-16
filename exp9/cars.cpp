#include <iostream>
using namespace std;
class car {
private:
    char model[10];
    char brand[10];
    int year;
public:
    void start() {
        cout << brand << " has started" << endl;
    }
    void stop() {
        cout << brand << " has stopped";
    }
    void setBrand() {
        cout << "Enter car's brand: ";
        cin >> brand;
        cout << brand << endl;
    }
    void setModel() {
        cout << "Enter car's model: ";
        cin >> model;
        cout << "Model: " << model << endl;
    }
    void setYear() {
        cout << "Enter car's year: ";
        cin >> year;
        cout << "Year: " << year << endl;
    }
    void output() {
        start();
        stop();
    }
};
int main() {
    car urCar;
    urCar.setBrand();
    urCar.setModel();
    urCar.setYear();
    urCar.output();
    return 0;
}
