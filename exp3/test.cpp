#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 1;
    cout << "enter n";
    cin >> n;
    while (i =1, i <= n, i++) {
       sum *= i;
    }
    cout << sum;
    return 0;
}
