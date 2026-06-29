#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000, amount;

    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Balance: " << balance << endl;
            break;

        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            break;

        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance\n";
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}