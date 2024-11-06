#include <iostream>
using namespace std;
class dada_dadi {
public:
    void zameen() {
        cout << "Dada-dadi ke paas zameen hai" << endl;
    }
};
class mumma_papa : public dada_dadi {
public:
    void bangla() {
        cout << "Mumma-papa ke paas bangla hai" << endl;
    }
};
class raees_bacchha : public mumma_papa {
public:
    void ifone() {
        cout << "Bacchhe ke paas iPhone 16 Pro Max hai" << endl;
    }
};
int main() {
    raees_bacchha raees;
    raees.zameen();
    raees.bangla();
    raees.ifone();
    return 0;
}
