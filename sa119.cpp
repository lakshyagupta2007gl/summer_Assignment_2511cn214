#include <iostream>
#include <string>
using namespace std;

int main() {
    int id[50], salary[50], n = 0;
    string name[50];
    int choice;

    do {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> id[n];
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name[n]);

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            break;

        case 2:
            cout << "\nID\tName\tSalary\n";
            for (int i = 0; i < n; i++) {
                cout << id[i] << "\t"
                     << name[i] << "\t"
                     << salary[i] << endl;
            }
            break;

        case 3:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}