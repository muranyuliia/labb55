#include <iostream>
using namespace std;

// Рекурсивна функція для представлення числа в системі числення з основою base.
void decimalToBase(int n, int base) {
    if (n > 0) {
        decimalToBase(n / base, base);
        cout << n % base;
    }
}

int main() {
    int decimalNumber, choice;

    cout << "number: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cerr << "nо." << endl;
        return 1;
    }

    cout << "2 or 8: ";
    cin >> choice;

    if (choice != 2 && choice != 8) {
        cerr << "Непідтримувана система числення." << endl;
        return 1;
    }

    cout << "result: ";
    decimalToBase(decimalNumber, choice);
    cout << endl;

    return 0;
}
