#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  int t; cin >> t;
  for (int tc = 1; tc <= t; tc++) {
      cout << "Case " << tc << ": ";
      int n; cin >> n;
      if (n == 0) {
          cout << "0\n";
          continue;
      }
      vector <ll> dp(n, 0);
      for (int i = 0; i < n; i++) {
          int x; cin >> x;
          dp[i] = x+(i-2 >= 0 ? dp[i-2] : 0);
          if (i > 0) dp[i] = max(dp[i], dp[i-1]);
      }
      cout << dp[n-1] << '\n';
  }
  return 0;
}
