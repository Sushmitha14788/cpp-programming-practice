#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
};

int main() {
    Data d;

    cout << "Enter an integer: ";
    cin >> d.number;
    cout << "Integer: " << d.number << endl;

    cout << "Enter a decimal number: ";
    cin >> d.decimal;
    cout << "Decimal: " << d.decimal << endl;

    return 0;
}