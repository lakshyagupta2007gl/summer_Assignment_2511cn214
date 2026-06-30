#include <iostream>
using namespace std;

int main() {
    int id[50], qty[50], n = 0;
    int choice;

    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Product ID: ";
            cin >> id[n];

            cout << "Enter Quantity: ";
            cin >> qty[n];

            n++;
            break;

        case 2:
            cout << "\nID\tQuantity\n";
            for (int i = 0; i < n; i++)
                cout << id[i] << "\t" << qty[i] << endl;
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