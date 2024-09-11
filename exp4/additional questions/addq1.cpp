#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> x;
    for (int i = 1; i <= x; i++) {
        sum += i * 2;
    }
    cout << sum;
    return 0;
}
