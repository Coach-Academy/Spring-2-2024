#include <bits/stdc++.h>

using namespace std;

int n, k;
vector <int> a;
vector <vector <int>> dp;
int go(int idx, int rem) {
    if (rem == 0) return 1; // I found a way
    if (idx == k) return 0; // rem is not zero and I'm out of coins
    int &ret = dp[idx][rem];
    if (~ret) return ret;

    ret = 0;
    // int taken = 0;
    // for (int i = 0; taken <= rem; i++) {
    //     ret+=go(idx+1, rem-taken);
    //     taken+=a[idx];
    // }

    ret = go(idx+1, rem);
    if (rem >= a[idx]) ret = max(ret, go(idx, rem-a[idx]));

    return ret;
}

int main() {
    cin >> n >> k;
    a.resize(k);
    dp.assign(k, vector <int> (n+1, -1));
    for (auto &i : a) cin >> i;
    cout << go(0, n) << '\n';
    return 0;
}
