#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t; cin >> t;
  for (int tc = 1; tc <= t; tc++) {
      int n; cin >> n;
      vector <int> a(n), p(n);
      for (int i = 0; i < n; i++) cin >> a[i] >> p[i];
      vector <vector <int> > dp(n+1, vector <int> (n+1, 2e9));
      dp[0][0] = 0;
      for (int i = 0; i < n; i++) {
          int sm = 0;
          for (int lst = i; lst >= 0; lst--) {
              sm+=a[lst];
              dp[i+1][i+1] = min(dp[i+1][i+1], dp[i][lst]+p[i]*(10+sm));
              dp[i+1][lst] = min(dp[i+1][lst], dp[i][lst]);
          }
      }
      cout << dp[n][n] << "\n";
  }
  return 0;
}
