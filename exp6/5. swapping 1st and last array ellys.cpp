#include <iostream>
using namespace std;
int main()
{
    int tmp, a[5];
    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++){
        cin >> a[i];
    }
    cout << "Array:\n";\
    for (int i = 0; i < 5; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    tmp = a[0];
    a[0] = a[4];
    a[4] = tmp;
    cout << "Array after swapping first and last elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
