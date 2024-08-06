#include <bits/stdc++.h>

using namespace std;

int main() {

    /*

    1-state: dp[i][j] = the maximum revenue that I can acheive processing only the i-th prefix
                        and occupying j units from my bag

    2-base case: dp[i][j] = 0

    3-transition:

    if (j+1 <= cap) dp[i][j+1] = max(self, dp[i][j])
    dp[i+1][j] = max(self, dp[i][j]) // leave it
    if (j+w[i] <= cap) dp[i+1][j+w[i]] = max(self, v[i]+dp[i][j]) // take it

    4-ans: dp[n][cap]

    */

    int n, cap; cin >> n >> cap;
    vector <int> w(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    // vector <vector <int>> dp(n+1, vector <int> (cap+1, 0));
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= cap; j++) {
    //         if (j < cap) dp[i][j+1] = max(dp[i][j+1], dp[i][j]);
    //         if (i < n) {
    //             dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
    //             if (j+w[i] <= cap) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], v[i]+dp[i][j]);
    //         }
    //     }
    // }
    // cout << dp[n][cap] << '\n';

    // memory optimization trick 1
    // vector <int> dp(cap+1, 0);
    // for (int i = 0; i < n; i++) {
    //     auto ndp = dp; // ndp-->dp[i+1], dp-->dp[i]
    //     for (int j = 0; j <= cap; j++) {
    //         if (i < n) {
    //             if (j < cap) ndp[j+1] = max(ndp[j+1], ndp[j]);
    //             ndp[j] = max(ndp[j], dp[j]);
    //             if (j+w[i] <= cap) ndp[j+w[i]] = max(ndp[j+w[i]], v[i]+dp[j]);
    //         }
    //     }
    //     dp = ndp;
    // }
    // cout << dp[cap] << '\n';

    // memory optimization trick 2
    vector <int> dp(cap+1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = cap; ~j; j--) {
            if (j+w[i] <= cap) dp[j+w[i]] = max(dp[j+w[i]], v[i]+dp[j]);
        }
    }
    cout << dp[cap] << '\n';
    return 0;
}
