#include <iostream>
using namespace std;
class employee {
public:
    char name[20];
    double salary;
};
int main() {
    employee emp;
    cout << "Enter name: ";
    cin.getline(emp.name, 20);
    cout << "Enter salary: ";
    cin >> emp.salary;
    cout << emp.name << '\n';
    cout << emp.salary;
    return 0;
}
