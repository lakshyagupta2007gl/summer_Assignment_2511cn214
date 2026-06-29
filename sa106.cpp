#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Salary: ";
    cin >> e.salary;

    cout << "\n----- Employee Details -----\n";
    cout << "ID     : " << e.id << endl;
    cout << "Name   : " << e.name << endl;
    cout << "Salary : " << e.salary << endl;

    return 0;
}