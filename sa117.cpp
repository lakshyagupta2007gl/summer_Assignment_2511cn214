#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[50], marks[50], n = 0;
    string name[50];
    int choice;

    do {
        cout << "\n--- Student Record Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Roll No: ";
            cin >> roll[n];
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name[n]);

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            break;

        case 2:
            cout << "\nRoll\tName\tMarks\n";
            for (int i = 0; i < n; i++) {
                cout << roll[i] << "\t"
                     << name[i] << "\t"
                     << marks[i] << endl;
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