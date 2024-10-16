#include <iostream>
using namespace std;
int main() {
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sumOne = 0, sumTwo = 0;
    for (int i = 0; i < 3; i++)
        sumOne += a[i][1];
    for (int i = 0; i < 3; i++)
        sumOne += a[1][i];
    sumOne -= a[1][1];
    for (int i = 0; i < 3; i++)
        sumTwo += a[i][2];
    for (int i = 0; i < 3; i++)
        sumTwo += a[2][i];
    sumTwo -= a[2][2];
    cout << sumOne << ' ' << sumTwo;
    return 0;
}
