#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is Not an Armstrong Number";

    return 0;
}