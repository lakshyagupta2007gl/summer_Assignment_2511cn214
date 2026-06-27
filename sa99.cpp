#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    if (strcmp(str1, str2) == 0)
        cout << "Strings are Equal";
    else
        cout << "Strings are Not Equal";

    return 0;
}