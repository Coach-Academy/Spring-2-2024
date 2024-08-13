#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

int main() {
    int t; cin >> t;
    while(t--) {
        int X, Y; cin >> X >> Y;
        pair<int, int> home;
        cin >> home.x >> home.y;
        int n; cin >> n;
        vector <pair<int, int>> beepers(n);
        for (auto &i : beepers) cin >> i.x >> i.y;
        beepers.push_back(home);
        vector <vector <int>> dp(n+1, vector <int> (1<<n, 1e9));
        dp[n][0] = 0;
        for (int msk = 0; msk < (1<<n); msk++) {
            for (int i = 0; i <= n; i++) {
                if (i != n && msk>>i&1^1) continue; // is must be the home or if it is not the home so it must be visited before
                for (int j = 0; j < n; j++) {
                    if (msk>>j&1) continue;
                    int nmsk = msk|(1<<j);
                    int dist = abs(beepers[i].x-beepers[j].x)+abs(beepers[i].y-beepers[j].y);
                    dp[j][nmsk] = min(dp[j][nmsk], dp[i][msk]+dist);
                }
            }
        }
        int ans = 2e9;
        for (int i = 0; i < n; i++) {
            ans = min(ans, dp[i][(1<<n)-1]+abs(beepers[i].x-beepers[n].x)
                                            +abs(beepers[i].y-beepers[n].y));
        }
        cout << "The shortest path has length " << ans << '\n';
    }
    return 0;
}
