#include <iostream>
using namespace std;
int main()
{
    int x[] = {1, 2, 3, 4, 5}, sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += x[i];
    }
    cout << sum;
    return 0;
}
