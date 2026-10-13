#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    int pin;
};

struct Student {
    string name;
    int age;
    Address addr;
};

int main() {
    Student s1;

    s1.name = "Anu";
    s1.age = 19;
    s1.addr.city = "Bengaluru";
    s1.addr.pin = 560064;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "City: " << s1.addr.city << endl;
    cout << "PIN: " << s1.addr.pin << endl;

    return 0;
}