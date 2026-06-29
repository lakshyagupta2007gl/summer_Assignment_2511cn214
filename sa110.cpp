#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            balance += amount;
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;
            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance!\n";
            break;

        case 3:
            cout << "Current Balance = " << balance << endl;
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}