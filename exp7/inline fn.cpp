#include <iostream>
using namespace std;
inline void add(int a, int b)
{
    cout << "addition is " << a + b;
}
int main()
{
    int x = 2, y = 3;
    add(x, y);
    return 0;
}
