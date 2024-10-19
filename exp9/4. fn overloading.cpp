#include <iostream>
using namespace std;
class addition {
public:
    int sum(int x, int y) {
        return x + y;
    }
    int sum(int x, int y, int z) {
        return x + y + z;
    }
    float sum(float x, float y) {
        return x + y;
    }
};
int main() {
    addition add;
    cout << add.sum(5, 10) << endl;
    cout << add.sum(5, 10, 15) << endl;
    cout << add.sum(0.7f, 0.5f);
    return 0;
}
