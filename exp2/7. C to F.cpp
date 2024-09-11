#include <iostream>
using namespace std;
int main()
{
    float C, F;
    cout << "Enter the temperature in degree Celsius: ";
    cin >> C;
    F = (C * 9/5) + 32;
    cout << "The temperature in degree Fahrenheit is " << F;
    return 0;
}
