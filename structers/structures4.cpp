#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
    }

    int highest = 0;

    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    cout << "Topper: " << s[highest].name << endl;
    cout << "Marks: " << s[highest].marks << endl;

    return 0;
}