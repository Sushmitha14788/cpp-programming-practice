#include <iostream>
using namespace std;

void swapNumbers(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int a = 10, b = 20;

    swapNumbers(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
/*To find the sum of numbers*/

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum = sum + *(p + i);
    }

    cout << "Sum = " << sum;

    return 0;
}