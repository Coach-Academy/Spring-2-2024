#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+10, mod = 1e9+7;
int dp[N][2];
int n, c;
vector <int> a, b;
int go(int floor, int elv = 0) {
    if (floor == 0) return 0;
    auto &ret = dp[floor][elv];
    if (~ret) return ret;
    ret = 2e9;
    ret = min(ret, go(floor-1, 0)+a[floor-1]);
    ret = min(ret, go(floor-1, 1)+b[floor-1]+(elv ? 0 : c));
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    cin >> n >> c;
    a.resize(n-1), b.resize(n-1);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (int i = 0; i < n; i++) {
        cout << go(i) << ' ';
    }
    return 0;
}
