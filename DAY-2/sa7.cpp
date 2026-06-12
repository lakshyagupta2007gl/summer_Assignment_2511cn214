#include <iostream>
using namespace std;

int main() {
    int n, digit;
    long long product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(n != 0) {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}