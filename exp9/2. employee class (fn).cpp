#include <iostream>
using namespace std;
class employee {
private:
    char name[20];
    double salary;
    char dept[10];
public:
    void getData() {
        cout << "Enter name: ";
        cin.getline(name, 20);
        cout << "Enter salary: ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter department: ";
        cin.getline(dept, 10);
    }
    void showData() {
        cout << "Employee details:\n";
        cout << "Name: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nDepartment: " << dept;
    }
};
int main() {
    employee emp;
    emp.getData();
    emp.showData();
    return 0;
}
