#include <iostream>
using namespace std;
class employee {
public:
    int id;
    char name[10];
    void getData() {
        cout << "Enter employee ID : ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
class manager : public employee {
public:
    int sal;
    void getData() {
        employee::getData();
        cout << "Enter employee's salary: ";
        cin >> sal;
    }
    void display() {
        employee::display();
        cout << "Salary: " << sal << endl;
    }
};
class projectManager : public manager {
public:
    int totalExp, projectsHandled;
    void getData() {
        manager::getData();
        cout << "Enter total experience (in years): ";
        cin >> totalExp;
        cout << "Enter the number of projects handled: ";
        cin >> projectsHandled;
    }
    void display() {
        manager::display();
        cout << "Total experience (in years): " << totalExp << endl;
        cout << "Projects handled: " << projectsHandled << endl;
    }
};
int main() {
    projectManager pm;
    pm.getData();
    cout << "\nProject manager details:\n\n";
    pm.display();
    return 0;
}
