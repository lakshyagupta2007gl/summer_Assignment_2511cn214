#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            cout << "first non repeating character: " << str[i];
            return 0;
        }
    }

    cout << "no non-repeating character found";

    return 0;
}