#include <iostream>
using namespace std;

union Marks {
    int theory;
    int practical;
};

struct Student {
    string name;
    Marks marks;
};

int main() {
    Student s;

    s.name = "Anu";
    s.marks.theory = 85;

    cout << "Name: " << s.name << endl;
    cout << "Theory Marks: " << s.marks.theory << endl;

    return 0;
}