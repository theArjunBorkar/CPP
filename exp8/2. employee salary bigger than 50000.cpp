#include <iostream>
using namespace std;
struct employee_data {
    int emp_no;
    char name[10];
    char address[20];
    char dept[10];
    float salary;
};
int main() {
    employee_data emp[10];
    for (int i = 0; i < 2; i++) {
        cout << "Employee number: ";
        cin >> emp[i].emp_no;
        fflush(stdin);
        cout << "Name: ";
        cin.getline(emp[i].name, 10);
        fflush(stdin);
        cout << "Address: ";
        cin.getline(emp[i].address, 20);
        fflush(stdin);
        cout << "Department: ";
        cin.getline(emp[i].dept, 10);
        fflush(stdin);
        cout << "Salary: ";
        cin >> emp[i].salary;
    }
    for (int i = 0; i < 2; i++) {
        if (emp[i].salary > 50000) {
            cout << "Employee number: " << emp[i].emp_no;
            cout << "\nName: " << emp[i].name;
            cout << "\nAddress: " << emp[i].address;
            cout << "\nDepartment: " << emp[i].dept;
            cout << "\nSalary: " << emp[i].salary;
        }
    }
    return 0;
}
