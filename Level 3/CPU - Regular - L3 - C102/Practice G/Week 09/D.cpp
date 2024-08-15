#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, p, a, b;
    while(cin >> n >> m >> p >> a >> b, n) {
        a--, b--;
        vector <int> t(n);
        for (auto &i : t) cin >> i;

        vector <vector <pair<int, int>>> adj(m);
        while(p--) {
            int u, v, z; cin >> u >> v >> z; u--, v--;
            adj[u].push_back({v, z});
            adj[v].push_back({u, z});
        }

        vector <vector <double>> dp(m, vector <double> (1<<n, 2e9));
        dp[a][0] = 0;
        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i < m; i++) {
                for (auto &[j, w] : adj[i]) {
                    for (int k = 0; k < n; k++) {
                        if (msk>>k&1) continue;
                        int nmsk = msk|(1<<k);
                        dp[j][nmsk] = min(dp[j][nmsk], dp[i][msk]+1.0*w/t[k]);
                    }
                }
            }
        }
        double mn = *min_element(dp[b].begin(), dp[b].end());
        if (mn > 1e5) cout << "Impossible\n";
        else cout << fixed << setprecision(4) << mn << "\n";
    }
    return 0;
}
