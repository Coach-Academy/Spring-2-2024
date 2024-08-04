#include <bits/stdc++.h>

using namespace std;

const int N = 110, mod = 1e9+7;
int dp[N][2];
int n, k, d;
int go(int tot = 0, int found = 0) {
    if (tot == n) return found;
    if (tot > n) return 0;
    auto &ret = dp[tot][found];
    if (~ret) return ret;
    ret = 0;
    for (int i = 1; i <= k; i++) {
        ret+=go(tot+i, found||(i >= d));
        if (ret >= mod) ret-=mod;
    }
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    cin >> n >> k >> d;
    cout << go() << '\n';
    return 0;
}
