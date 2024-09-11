#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int CI, P, R, T, N;
    cout << "Enter the principal amount: ";
    cin >> P;
    cout << "Enter the interest rate: ";
    cin >> R;
    R /= 100;
    cout << "Enter the duration of loan: ";
    cin >> T;
    /*cout << "Enter the number of times interest is to be compounded: ";
    cin >> N;
    apparently N is 1*/
    N = 1;
    CI = P * pow(1 + (R / N), N * T);
    cout << "The compound interest is " << CI;
    return 0;
}
