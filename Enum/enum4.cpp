/*USING ENUM WITH FUNCTIONS*/

#include <iostream>
using namespace std;

enum Level
{
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3
};

void displayLevel(Level x)
{
    cout << "Level value: " << x;
}

int main()
{
    Level myLevel = HIGH;

    displayLevel(myLevel);

    return 0;
}