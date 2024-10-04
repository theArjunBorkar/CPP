#include <iostream>
using namespace std;
struct specs {
    char CPU[10];
    int HDD;
    int puter_num;
};
int main() {
    specs puter[50];
    for (int i = 0; i < 2; i++) {
        cout << "Enter computer number: ";
        cin >> puter[i].puter_num;
        fflush(stdin);
        cout << "Enter your CPU: ";
        cin.getline(puter[i].CPU, 5) ;
        fflush(stdin);
        cout << "Enter your HDD size (in GB): ";
        cin >> puter[i].HDD;
    }
    for (int i = 0; i < 2; i++) {
        if (puter[i].HDD > 8) {
            cout << "\nComputer number: " << puter[i].puter_num;
            cout << "\nCPU: " << puter[i].CPU;
            cout << "\nHDD: " << puter[i].HDD << "gb";
        }
    }
    return 0;
}
