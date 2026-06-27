#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int start = 0;
    for (int i = 0;; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = i - 1; j >= start; j--)
                cout << str[j];

            if (str[i] == ' ')
                cout << " ";

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    return 0;
}