#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
};

void display(Data d) {
    cout << "Number: " << d.number << endl;
}

int main() {
    Data d;

    d.number = 100;

    display(d);

    return 0;
}