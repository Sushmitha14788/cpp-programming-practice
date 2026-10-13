/*FOR REVERSING AN ARRAY*/

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;

    cout<<"Enter number of elements:"<<endl;
    cin>>n;

    cout << "Enter  elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Reversed array: ";

    for(int i = n-1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}