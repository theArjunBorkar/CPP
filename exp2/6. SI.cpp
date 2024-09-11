#include <iostream>
using namespace std;
int main()
{
    float principle, rate, time, si;
    cout << "Enter principle amount: ";
    cin >> principle;
    cout << "Enter interest rate: ";
    cin >> rate;
    cout << "Enter the duration: ";
    cin >> time;
    si = (principle * rate * time) / 100;
    cout << "The simple interest is " << si;
    return 0;
}
