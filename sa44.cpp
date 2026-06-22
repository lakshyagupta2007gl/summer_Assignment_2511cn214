#include <iostream>
using namespace std;

long long fact(int n)
{
    long long fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << "Factorial = " << fact(n);
    return 0;
}