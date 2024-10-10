#include <iostream>
using namespace std;
class addition {
public:
    double sum(double x, double y) {
        return x + y;
    }
    double sum(double x, double y, double z) {
        return x + y + z;
    }
};
int main() {
    addition add;
    cout << add.sum(5, 10) << endl;
    cout << add.sum(5, 10, 15) << endl;
    cout << add.sum(0.7f, 0.5f);
    return 0;
}
