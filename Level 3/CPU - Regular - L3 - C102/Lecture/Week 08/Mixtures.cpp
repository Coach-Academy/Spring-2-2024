#include <bits/stdc++.h>

using namespace std;

int main() {

    /*

    1-state: dp[l][r] = minimum smoke that result from mixing
                        the whole subarray starting at l and ending at r

    2-base case: dp[i][i] = 0, otherwise dp[i][j] = 2e9

    3-transition:

    dp[l][r] = min(self, dp[l][sp]+dp[sp+1][r]+get(l, sp)*get(sp+1, r))

    4-ans: dp[0][n-1]

    */

    int n;
    while(cin >> n) {
        vector <int> a(n);
        for (auto &i : a) cin >> i;
        vector <int> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1]+a[i];
        }

        auto get = [&](int l, int r) {
            assert(l <= r);
            return (pref[r]-(l ? pref[l-1] : 0))%100;
        };

        vector <vector <int>> dp(n, vector <int> (n, 2e9));
        for (int l = n-1; ~l; l--) {
            dp[l][l] = 0;
            for (int r = l+1; r < n; r++) {
                for (int sp = l; sp < r; sp++) {
                    dp[l][r] = min(dp[l][r], dp[l][sp]+dp[sp+1][r]+get(l, sp)*get(sp+1, r));
                }
            }
        }

        cout << dp[0][n-1] << "\n";
    }
    return 0;
}
