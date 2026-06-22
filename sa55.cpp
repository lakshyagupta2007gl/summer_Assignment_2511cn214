#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int lrgst = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > lrgst)
        {
            second = lrgst;
            lrgst = arr[i];
        }
        else if(arr[i] > second && arr[i] != lrgst)
        {
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second;

    return 0;
}