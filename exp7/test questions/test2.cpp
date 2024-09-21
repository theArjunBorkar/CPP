#include <iostream>
using namespace std;
int lrgst_arr_elly(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Largest array element is " << lrgst_arr_elly(arr, n);
    return 0;
}
