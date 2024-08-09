#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  int t; cin >> t;
  for (int tc = 1; tc <= t; tc++) {
      string s; cin >> s;
      int n = (int)s.size();
      vector <vector <int>> dp(n, vector <int> (n, 2e9));
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < i; j++) {
              dp[i][j] = 0;
          }
      }

      for (int l = n-1; l >= 0; l--) {
          for (int r = l; r < n; r++) {
              if (l+1 < n && r-1 >= 0 && s[l] == s[r]) dp[l][r] = min(dp[l][r], dp[l+1][r-1]);
              if (r-1 >= 0) dp[l][r] = min(dp[l][r], dp[l][r-1]+1);
              if (l+1 < n) dp[l][r] = min(dp[l][r], dp[l+1][r]+1);
          }
      }
      cout << dp[0][n-1] << '\n';
  }
  return 0;
}
