#include <iostream>
using namespace std;
void leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    leap_year(year);
    return 0;
}
