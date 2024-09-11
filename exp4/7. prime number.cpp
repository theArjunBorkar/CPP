#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) cout << "Prime numbers do not exist below 2";
    else if (num > 2) {
        for (int i = 3; i < num; i++) {
            if (num % i != 0) cout << "Not Prime";
            break;
        }
    } else cout << "Prime";
    return 0;
}
