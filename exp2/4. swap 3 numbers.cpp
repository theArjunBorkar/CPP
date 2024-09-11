#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter x, y and z: ";
    cin >> x >> y >> z;
    z = x * y * z;
    y = z / (x * y);
    x = z / (x * y);
    z = z / (x * y);
    cout << "Now x = " << x << " y = " << y << " z = " << z;
    return 0;
}
