#include <iostream>
using namespace std;
// Рекурсивна функція для представлення числа в системі числення з основою base.
void decimalToBase(int n, int base) {
    if (n > base - 1) {
        decimalToBase(n / base, base);
    }
    cout << n % base;
}

int main() {
    int decimalNumber, choice;

    cout << "natural number: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cerr << "no natural." << endl;
        return 1;
    }

    cout << "2 or 8 ";
    cin >> choice;

    if (choice != 2 && choice != 8) {
        cerr << "nepidtrymuvana systema chyslenya" << endl;
        return 1;
    }

    cout << "predstavlenya number: ";
    decimalToBase(decimalNumber, choice);
    cout << endl;

    return 0;
}
