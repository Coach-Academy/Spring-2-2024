#include <bits/stdc++.h>

using namespace std;

vector <vector <int>> split;
void bld(int l, int r) {
    if (l == r) {
        cout << "A" << l+1;
        return;
    }
    cout << '(';
    auto sp = split[l][r];
    bld(l, sp);
    cout << " x ";
    bld(sp+1, r);
    cout << ')';
}

int main() {
    int n;
    int tc = 1;
    while (cin >> n, n) {
        vector <int> R(n), C(n);
        for (int i = 0; i < n; i++) cin >> R[i] >> C[i];
        vector <vector <int>> dp(n, vector <int> (n, 1e9));
        split.assign(n, vector <int> (n));
        for (int i = 0; i < n; i++) {
            dp[i][i] = 0;
        }
        for (int l = n-1; l >= 0; l--) {
            for (int r = l; r < n; r++) {
                for (int sp = l; sp < r; sp++) {
                    int op = dp[l][sp]+dp[sp+1][r]+R[l]*C[sp]*C[r];
                    if (dp[l][r] > op) {
                        dp[l][r] = op;
                        split[l][r] = sp;
                    }
                }
            }
        }
        cout << "Case " << tc++ << ": ";
        bld(0, n-1);
        cout << '\n';
    }
    return 0;
}
