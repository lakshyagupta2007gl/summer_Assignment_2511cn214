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
    int smlst = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > lrgst)
            lrgst = arr[i];

        if(arr[i] < smlst)
            smlst = arr[i];
    }

    cout << "Largest = " << lrgst << endl;
    cout << "Smallest = " << smlst;

    return 0;
}