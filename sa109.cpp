#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    cout << "\n----- Book Details -----\n";
    cout << "Book ID : " << b.id << endl;
    cout << "Title   : " << b.title << endl;
    cout << "Author  : " << b.author << endl;

    return 0;
}