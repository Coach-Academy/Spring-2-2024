#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10, mod = 1e9+7;
int dp[N];
int k;
int go(int tot) {
    if (tot == 0) return 1;
    if (tot < 0) return 0;
    auto &ret = dp[tot];
    if (~ret) return ret;
    ret = (2*go(tot-1)-go(tot-2))%mod+(go(tot-k)-go(tot-k-1));
    ret%=mod;
    if (ret < 0) ret+=mod;
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    int t; cin >> t >> k;
    while(t--) {
        int a, b; cin >> a >> b;
        int res = go(b)-go(a-1);
        if (res < 0) res+=mod;
        cout << res << '\n';
    }
    return 0;
}
