#include <iostream>
using namespace std;
int largest(int a[][3], int n)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            max = a[i][j];
    return max;
}
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int a[n][3];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    cout << "Largest array element is " << largest(a, n);
    return 0;
}
