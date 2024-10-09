#include <iostream>
using namespace std;
class std_rec {
private:
    char name[20];
    int rollno;
    int phy;
    int chem;
    int maths;
    int avg;
public:
    void input() {
        cout << "Enter student name: ";
        cin.getline(name, 20);
        cout << "Enter roll number: ";
        cin >> rollno;
        fflush(stdin);
        cout << "Enter physics marks: ";
        cin >> phy;
        fflush(stdin);
        cout << "Enter chemistry marks: ";
        cin >> chem;
        fflush(stdin);
        cout << "Enter maths marks: ";
        cin >> maths;
        fflush(stdin);
    }
    void average() {
        avg = (phy + chem + maths) / 3;
    }
    void output() {
        cout << "Student details:\n";
        cout << "Name: " << name;
        cout << "\nRoll number: " << rollno;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem;
        cout << "\nMaths marks: " << maths;
        cout << "\nAverage marks: " << avg;
        if (avg < 40) cout << "\nResult: FAIL\n";
        else cout << "\nResult: PASS\n";
    }
};
int main() {
    std_rec rec[10];

    for (int i = 0; i < 10; i++) {
        rec[i].input();
        rec[i].average();
        rec[i].output();
    }

    return 0;
}
