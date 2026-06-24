#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n - 1; i++) {
        int minIndx = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndx])
                minIndx = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndx];
        arr[minIndx] = temp;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}