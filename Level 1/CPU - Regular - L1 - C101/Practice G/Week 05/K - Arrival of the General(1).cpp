#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mx = INT_MIN, mxPos = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > mx) {
            mx = max(mx, arr[i]);
            mxPos = i;
        }
    }
    int mn = INT_MAX, mnPos = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= mn) {
            mn = min(mn, arr[i]);
            mnPos = i;
        }
    }

    cout << mxPos + ((n - 1) - mnPos) - (mxPos > mnPos) << endl;


}
