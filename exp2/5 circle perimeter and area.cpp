#include <iostream>
using namespace std;
int main()
{
    float radius, perimeter, area;
    const float pi = 3.14;
    cout << "Enter circle's radius: ";
    cin >> radius;
    perimeter = 2 * pi * radius;
    area = pi * radius * radius;
    cout << "Perimeter = " << perimeter << "\nArea = " << area;
    return 0;
}
