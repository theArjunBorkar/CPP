#include <iostream>
using namespace std;
class employee {
protected:
    int id;
    char name[10];
public:
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
class manager : protected employee {
protected:
    int sal;
public:
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
class projectManager : protected manager {
protected:
    int totalExp, projectsHandled;
public:
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
