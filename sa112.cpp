#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    cout << "\n----- Contact Details -----\n";
    cout << "Name  : " << c.name << endl;
    cout << "Phone : " << c.phone << endl;

    return 0;
}