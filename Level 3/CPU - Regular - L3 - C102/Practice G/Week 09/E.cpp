#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n;
    while(cin >> n, n) {
        vector <int> h(n);
        for (auto &i : h) cin >> i;
        vector <vector <int>> dp1(n, vector <int> (1<<n, -2e9));
        for (int i = 0; i < n; i++) {
            dp1[i][1<<i] = 2+h[i];
        }

        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (msk>>j&1) continue;
                    int nmsk = msk|(1<<j);
                    dp1[j][nmsk] = max(dp1[j][nmsk], dp1[i][msk]+abs(h[i]-h[j])+2);
                }
            }
        }
        vector <vector <ll>> dp2(n, vector <ll> (1<<n, 0));
        for (int i = 0; i < n; i++) {
            dp2[i][1<<i] = 1;
        }

        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (msk>>j&1) continue;
                    int nmsk = msk|(1<<j);
                    if (dp1[j][nmsk] == dp1[i][msk]+abs(h[i]-h[j])+2) {
                        dp2[j][nmsk]+=dp2[i][msk];
                    }
                }
            }
        }
        int mx = 0;
        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i < n; i++) {
                mx = max(dp1[i][msk]+h[i], mx);
            }
        }

        ll ans = 0;
        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i < n; i++) {
                if (dp1[i][msk]+h[i] == mx) ans+=dp2[i][msk];
            }
        }

        cout << mx << ' ' << ans << '\n';
    }
    return 0;
}
