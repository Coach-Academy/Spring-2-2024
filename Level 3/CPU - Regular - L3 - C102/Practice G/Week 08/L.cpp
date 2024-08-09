#include <bits/stdc++.h>

using namespace std;

int main() {
    int L;
    while (cin >> L, L) {
        int n; cin >> n; n++;
        vector <int> pos(n+1);
        pos[0] = 0, pos[n] = L;
        for (int i = 1; i < n; i++) cin >> pos[i];
        vector <vector <int>> dp(n+1, vector <int> (n+1, 1e9));
        for (int i = 0; i < n; i++) {
            dp[i][i+1] = 0;
        }
        for (int l = n; l >= 0; l--) {
            for (int r = l; r <= n; r++) {
                for (int sp = l+1; sp < r; sp++) {
                    dp[l][r] = min(dp[l][r], dp[l][sp]+dp[sp][r]+pos[r]-pos[l]);
                }
            }
        }
        cout << "The minimum cutting is " << dp[0][n] << ".\n";
    }
    return 0;
}
