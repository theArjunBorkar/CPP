#include <iostream>
using namespace std;
int main()
{
    int n1, n2, hcf, lcm;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    int tempn1 = n1;
    int tempn2 = n2;
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    cout << "HCF = " << n1 << endl;
    lcm = (tempn1 * tempn2) / n1;
    cout << "LCM = " << lcm << endl;
    return 0;
}
