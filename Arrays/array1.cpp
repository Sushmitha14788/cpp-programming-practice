/*TO FIND THE LARGEST OF TWO NUMBERS*/

#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = a[0], smallest = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest;

    return 0;
}