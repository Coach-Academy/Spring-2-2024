#include <bits/stdc++.h>

using namespace std;

int main() {

    /*

    1-state: dp[i][j] = the largest common subsequence between the i-th prefix from string s1 and the j-th prefix from string s2

    2-base case: dp[i][j] = 0

    3-transition: dp[i][j]--->dp[i+1][j], dp[i][j+1], dp[i+1][j+1]

    dp[i+1][j] = max(self, dp[i][j])
    dp[i][j+1] = max(self, dp[i][j])
    if (s1[i] == s2[j]) dp[i+1][j+1] = max(self, dp[i][j]+1)

    4-ans: dp[s1.size()][s2.size()]

    */

    string s1, s2;
    while(getline(cin, s1)) {
        getline(cin, s2);
        int n = (int)s1.size(), m = (int)s2.size();
        vector <vector <int>> dp(n+1, vector <int> (m+1, 0));
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i < n) dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
                if (j < m) dp[i][j+1] = max(dp[i][j+1], dp[i][j]);

                if (i < n && j < m && s1[i] == s2[j]) {
                    dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1);
                }
            }
        }
        cout << dp[n][m] << '\n';
    }
    return 0;
}
