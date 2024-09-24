#include <iostream>
using namespace std;
bool search_element(int arr[], int n, int index) {
    for (int i = 0; i < n; i++)
        if (arr[i] = index)
            return true;
    return false;
}
int main() {
    int n, index;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element you need to find: ";
    cin >> index;
    if (search_element(arr, n, index))
        cout << "Element found";
    else cout << "Element not found";
    return 0;
}
