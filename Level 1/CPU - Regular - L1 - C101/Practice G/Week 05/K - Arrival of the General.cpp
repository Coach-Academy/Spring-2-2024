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
    int ans = 0;
    while (mxPos > 0) {
        swap(arr[mxPos], arr[mxPos - 1]);
        mxPos--;
        ans++;
    }
    int mn = INT_MAX, mnPos = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= mn) {
            mn = min(mn, arr[i]);
            mnPos = i;
        }
    }
    while (mnPos < n - 1) {
        swap(arr[mnPos], arr[mnPos + 1]);
        mnPos++;
        ans++;
    }
    cout << ans << endl;


}
