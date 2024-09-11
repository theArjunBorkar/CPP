#include <iostream>
using namespace std;
int main()
{
    int M, N, sum = 0;
    cout << "Enter M: ";
    cin >> M;
    cout << "Enter N: ";
    cin >> N;
    if (N > M) {
        for (int i = M + 1; i < N; i++) {
                sum += i;
        }
        cout << "Sum = " << sum;
    } else cout << "M cannot be greater";
    return 0;
}
