#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter String: ";
    cin.ignore();
    getline(cin, str);

    do {
        cout << "\n1.Length\n2.Append\n3.Display\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Length = " << str.length();
            break;

        case 2: {
            string s;
            cout << "Enter another string: ";
            cin.ignore();
            getline(cin, s);
            str += s;
            break;
        }

        case 3:
            cout << "String = " << str;
            break;

        case 4:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}