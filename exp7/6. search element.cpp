#include <iostream>
using namespace std;
int add_digits(int num) {
    int digit, sum = 0;
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
int rev_digits(int num) {
    int digit, reverse = 0;
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}
int count_digits(int num) {
    int cnt = 0;
    while (num != 0) {
        num /= 10;
        cnt++;
    }
    return cnt;
}
int main() {
    int num, choice;
    cout << "Enter a number: ";
    cin >> num;
    cout << "1. Sum of digits" << '\n';
    cout << "2. Reverse of a number" << '\n';
    cout << "3. Number of digits" << '\n';
    cout << "4. Exit" << '\n';
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Sum of digits = " << add_digits(num);
        break;
    case 2:
        cout << "Reversed number = " << rev_digits(num);
        break;
    case 3:
        cout << "Number of digits = " << count_digits(num);
        break;
    case 4:
        return 1;
    default:
        cout << "Invalid input";
    }
    return 0;
}
