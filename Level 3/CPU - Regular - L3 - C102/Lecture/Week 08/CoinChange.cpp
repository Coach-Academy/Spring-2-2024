#include <bits/stdc++.h>

using namespace std;

int main() {

    /*

    1-state: dp[i][j] = the number of ways to get a sum of j from the first i coins

    2-base case: dp[0][0] = 1, dp[i][j] = 0

    3-transition:

    dp[i][j+coin[i]]+=dp[i][j]
    dp[i+1][j]+=dp[i][j]

    4-ans: dp[n][k]

    */

    int n, k; cin >> n >> k;
    vector <int> coins(n+1);
    for (int i = 1; i <= n; i++) cin >> coins[i];
    // vector <vector <int>> dp(n+1, vector <int> (k+1, 0));
    // dp[0][0] = 1;
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= k; j++) {
    //         if (i < n) dp[i+1][j]+=dp[i][j];
    //         if (j+coins[i] <= k) dp[i][j+coins[i]]+=dp[i][j];
    //     }
    // }
    // cout << dp[n][k] << '\n';

    vector <int> dp(k+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j+coins[i] <= k) dp[j+coins[i]]+=dp[j];
        }
    }
    cout << dp[k] << '\n';
    return 0;
}
