#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    int start = 100;
    int end = 200;
    for (int i = start; i <= end; i++) {
        if (i % 9 == 0) {
            cout << i << endl;
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
