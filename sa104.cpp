#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "1. Capital of India?\n";
    cout << "1.Delhi 2.Mumbai 3.Chennai\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "2. 5 + 7 = ?\n";
    cout << "1.10 2.12 3.15\n";
    cin >> ans;
    if (ans == 2) score++;

    cout << "3. C++ was developed by?\n";
    cout << "1.Bjarne Stroustrup 2.Dennis Ritchie 3.James Gosling\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "\nFinal Score = " << score << "/3";

    return 0;
}