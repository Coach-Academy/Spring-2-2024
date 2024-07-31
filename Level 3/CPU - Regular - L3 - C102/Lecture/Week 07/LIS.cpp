#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;
int dp[11][12];
int go(int i = 0, int j = 11) {
    if (i == n) return 0;
    int &ret = dp[i][j];
    if (~ret) return ret;

    // do not take it
    ret = go(i+1, j);

    // take it
    if (a[i] > a[j] || j == 11) ret = max(ret, 1+go(i+1, i));

    return ret;
}

int main() {
    cin >> n;
    a.resize(n);
    for (auto &i : a) cin >> i;
    memset(dp, -1, sizeof dp);
    cout << go();
    return 0;
}
