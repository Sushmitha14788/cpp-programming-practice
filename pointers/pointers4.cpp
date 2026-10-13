#include <iostream>
using namespace std;

int* getPointer(int *p) {
    return p;
}

int main() {
    int x = 25;

    int *ptr = getPointer(&x);

    cout << *ptr;

    return 0;
}