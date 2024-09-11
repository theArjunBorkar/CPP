#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 1, sum;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0) cout << "Enter a positive number";
    else {
       for (int i = 1; i <= n; i++) {
            cout << x << endl;
            sum = x + y;
            x = y;
            y = sum;
        }
    }
    return 0;
}
