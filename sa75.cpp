#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        sum += a[i][i];

    cout << "Diagonal Sum = " << sum;

    return 0;
}