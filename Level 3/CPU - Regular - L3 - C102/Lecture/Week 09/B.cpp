#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

const int mod = 1e9+7;

int main() {
    int n, T; cin >> n >> T;
    vector <int> t(n), g(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> g[i];
    }

    vector <vector <int>> dp(n+1, vector <int> (1<<n, 0));
    dp[n][0] = 1;
    for (int msk = 0; msk < (1<<n); msk++) {
        for (int i = 0; i <= n; i++) {
            if (i != n && msk>>i&1^1) continue;
            for (int j = 0; j < n; j++) {
                if (msk>>j&1) continue;
                if (g[j] == g[i]) continue;
                int nmsk = msk|(1<<j);
                dp[j][nmsk]+=dp[i][msk];
                if (dp[j][nmsk] >= mod) dp[i][nmsk]-=mod;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int msk = 0; msk < (1<<n); msk++) {
            int totTime = 0;
            for (int bt = 0; bt < n; bt++) {
                if (msk>>bt&1) {
                    totTime+=t[bt];
                }
            }
            if (totTime == T) {
                ans+=dp[i][msk];
                if (ans >= mod) ans-=mod;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
