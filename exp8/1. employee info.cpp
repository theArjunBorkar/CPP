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
    employee_data emp;
    cout << "Employee number: ";
    cin >> emp.emp_no;
    fflush(stdin);
    cout << "Name: ";
    cin.getline(emp.name, 10);
    fflush(stdin);
    cout << "Address: ";
    cin.getline(emp.address, 20);
    fflush(stdin);
    cout << "Department: ";
    cin.getline(emp.dept, 10);
    fflush(stdin);
    cout << "Salary: ";
    cin >> emp.salary;
    cout << "Employee number: " << emp.emp_no;
    cout << "\nName: " << emp.name;
    cout << "\nAddress: " << emp.address;
    cout << "\nDepartment: " << emp.dept;
    cout << "\nSalary: " << emp.salary;
    return 0;
}
