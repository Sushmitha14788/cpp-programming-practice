
#include <iostream>
using namespace std;

enum Signal
{
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main()
{
    int n;

    cout << "Enter signal (1-3): ";
    cin >> n;

    Signal s = static_cast<Signal>(n);

    switch(s)
    {
        case RED:
            cout << "Stop";
            break;

        case YELLOW:
            cout << "Get Ready";
            break;

        case GREEN:
            cout << "Go";
            break;

        default:
            cout << "Invalid signal";
    }

    return 0;
}