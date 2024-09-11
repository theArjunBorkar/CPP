#include <iostream>
using namespace std;
int main()
{
    const int baseBill = 100;
    double units, billAmount, disPer, disAmount, Tbill;
    const int rate = 10;
    cout << "The base electricity bill is " << baseBill << endl;
    cout << "Enter the units consumed: ";
    cin >> units;
    billAmount = baseBill + (units * rate);
    if (billAmount <= 200) disPer = 0;
    else if (billAmount > 200 && billAmount <= 500) disPer = 5;
    else if (billAmount > 500 && billAmount <= 800) disPer = 10;
    else if (billAmount > 800 && billAmount <= 1100) disPer = 15;
    else disPer = 20;
    disAmount = billAmount * (disPer / 100);
    Tbill = billAmount - disAmount;
    cout << "Bill amount = " << billAmount;
    cout << "\nDiscount percentage = " << disPer;
    cout << "\nDiscount amount = " << disAmount;
    cout << "\nTotal electricity bill (after discount) = " << Tbill;
    return 0;
}
