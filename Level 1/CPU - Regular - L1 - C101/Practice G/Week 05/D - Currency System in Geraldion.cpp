#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }
    if (mn == 1)
        cout << -1 << endl;
    else
        cout << 1 << endl;
}
