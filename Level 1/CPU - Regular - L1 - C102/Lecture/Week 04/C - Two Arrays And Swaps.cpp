#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        while (k--) {
            int mn = a[0], mnPos = 0;
            int mx = b[0], mxPos = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] < mn) {
                    mn = a[i];
                    mnPos = i;
                }
                if (b[i] > mx) {
                    mx = b[i];
                    mxPos = i;
                }
            }
            if (mn < mx) {
                a[mnPos] = mx;
                b[mxPos] = mn;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        cout << sum << endl;
    }
}
