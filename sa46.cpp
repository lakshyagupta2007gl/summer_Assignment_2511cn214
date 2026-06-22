#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, sum = 0, dig = 0;

    int t = n;
    while(t > 0)
    {
        dig++;
        t /= 10;
    }

    t = n;
    while(t > 0)
    {
        int rem = t % 10;
        sum += pow(rem, dig);
        t /= 10;
    }

    return sum == temp;
}

int main()
{
    int n;
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}