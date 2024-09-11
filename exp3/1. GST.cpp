#include <iostream>
using namespace std;
int main()
{
    double GST, rate, price, GSTamt;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter the GST rate: ";
    cin >> rate;
    if (rate >= 0 && rate <= 28) {
        GST = (price * rate) / 100;
        GSTamt = GST + price;
        cout << "The price with GST is " << GSTamt << "Rs";
    } else {
        cout << "GST is not supposed to be above 28%";
    }
    return 0;
}
