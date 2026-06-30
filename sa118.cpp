#include <iostream>
#include <string>
using namespace std;

int main() {
    string book[50];
    int n = 0, choice;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Book Name: ";
            getline(cin, book[n]);
            n++;
            break;

        case 2:
            cout << "\nBooks Available:\n";
            for (int i = 0; i < n; i++)
                cout << i + 1 << ". " << book[i] << endl;
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