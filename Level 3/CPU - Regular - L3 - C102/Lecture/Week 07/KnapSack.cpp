#include <bits/stdc++.h>

using namespace std;

int n, cap;
vector <vector <int>> dp; // dp[i][j] = maximum value that can be obtained from the first i elements when the remaining in the bag is j
vector <pair<int, int>> a;
int go(int cur = 0, int rem = cap) {
    if (cur == n) return 0;
    int &ret = dp[cur][rem];
    if (~ret) return ret;

    ret = 0;

    // take it
    if (rem >= a[cur].first) {
        ret = a[cur].second+go(cur+1, rem-a[cur].first);
    }

    // do not take it
    ret = max(ret, go(cur+1, rem));

    return ret;
}

int main() {
    cin >> n >> cap;
    a.resize(n);
    dp.assign(n, vector <int> (cap+1, -1));
    for (auto &[w, v] : a) cin >> w >> v;
    cout << go() << '\n';
    return 0;
}
