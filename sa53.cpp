#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "found at pos" << pos + 1;
    else
        cout << "not Found";

    return 0;
}