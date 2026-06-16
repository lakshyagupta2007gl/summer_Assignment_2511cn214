#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    long long largestFactor = 0;

    for(long long i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largestFactor = i;
            n /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestFactor;

    return 0;
}