#include <iostream>
using namespace std;

union Data {
    int a;
    float b;
    char c;
};

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;

    cout << "Size of union: " << sizeof(Data) << " bytes" << endl;

    return 0;
}