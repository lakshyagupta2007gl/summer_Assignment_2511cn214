#include <iostream>
using namespace std;

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Max = " << max(a, b);
    return 0;
}