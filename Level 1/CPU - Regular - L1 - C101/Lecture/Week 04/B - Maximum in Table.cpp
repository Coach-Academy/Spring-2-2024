#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int j = 0; j < n; ++j) {
        arr[0][j] = arr[j][0] = 1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    cout << arr[n - 1][n - 1] << endl;
}
