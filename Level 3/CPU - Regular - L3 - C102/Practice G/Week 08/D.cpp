#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int coins[] = {1, 5, 10, 25, 50};
    const int N = 1e4;
    ll dp[N]{}; dp[0] = 1;
    for (auto &c : coins) {
        for (int j = 0; j < N; j++) {
            if (j+c < N) dp[j+c]+=dp[j];
        }
    }
    int n;
    while(cin >> n) {
        cout << dp[n] << "\n";
    }
    return 0;
}
