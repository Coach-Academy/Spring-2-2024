#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

const int mod = 1e9+7;

int main() {
    int tc = 1, n;
    while(cin >> n, n) {
        vector <pair<int, int>> Ps(2*n);
        for (auto &i : Ps) {
            string dum; cin >> dum;
            cin >> i.x >> i.y;
        }
        vector <double> dp(1<<(2*n), 2e9);
        dp[0] = 0;
        for (int msk = 0; msk < (1<<(2*n)); msk++) {
            for (int i = 0; i < 2*n; i++) {
                if (msk>>i&1) continue;
                for (int j = 0; j < 2*n; j++) {
                    if (j == i || msk>>j&1) continue;
                    int nmsk = msk|(1<<i)|(1<<j);
                    dp[nmsk] = min(dp[nmsk], dp[msk]+hypot(Ps[i].x-Ps[j].x, Ps[i].y-Ps[j].y));
                }
            }
        }
        cout << "Case " << tc++ << ": ";
        cout << fixed << setprecision(2) << dp[(1<<(2*n))-1] << '\n';
    }
    return 0;
}
