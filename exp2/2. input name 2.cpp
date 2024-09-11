#include <iostream>
using namespace std;
int main()
{
    char name[20];
    int age;
    char gender[10];
    int height;
    char city[10];
    char college[10];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender: ";
    cin >> gender;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your city of residence: ";
    cin >> city;
    cout << "Enter your college: ";
    cin >> college;
    cout << "Hello, " << name << " you are " << age << " years old and a " << gender << ". Your height is " << height << "cm, you live in " << city << " and study in " << college << "." << endl;
    return 0;
}
