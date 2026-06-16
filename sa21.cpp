#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    long long binary = 0;
    int place = 1;

    while(n > 0)
    {
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}