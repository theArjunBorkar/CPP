#include <iostream>
using namespace std;
class employee {
    int emp_id;
    char emp_name[10];
    double emp_sal;
public:
    employee() {}
    employee(int id, char name[10], double sal) {
        emp_id = id;
        for (int i = 0; i < 10; i++)
            emp_name[i] = name[i];
        emp_sal = sal;
    }
    void display() {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee name: " << emp_name;
        cout << "\nEmployee salary: " << emp_sal;
    }
};
int main() {
    employee emp[2];
    for (int i = 0; i < 2; i++) {
        int id;
        char name[10];
        double sal;
        cout << "Enter employee ID: ";
        cin >> id;
        fflush(stdin);
        cout << "Enter employee name: ";
        cin.getline(name, 10);
        fflush(stdin);
        cout << "Enter employee salary: ";
        cin >> sal;
        fflush(stdin);
        emp[i] = employee(id, name, sal);
    }
    for (int i = 0; i < 2; i++) {
        emp[i].display();
    }
    return 0;
}
