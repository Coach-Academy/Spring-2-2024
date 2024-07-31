#include <bits/stdc++.h>

using namespace std;

int n, m;
string s1, s2;
vector <vector <int>> dp;
int go(int i = 0, int j = 0) {
    if (i == n || j == m) {
        if (i == n && j == m) return 0;
        return 2e9;
    }
    int &ret = dp[i][j];
    if (~ret) return ret;

    ret = 2e9;

    // skip the i-th character from string s1
    ret = min(ret, 1+go(i+1, j));

    // skip the j-th character from string s2
    ret = min(ret, 1+go(i, j+1));

    if (s1[i] == s2[j]) { // take the i-th and j-th characters
        ret = min(ret, go(i+1, j+1));
    }

    ret = min(ret, 1+go(i+1, j+1));

    return ret;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> s1 >> s2;
        n = (int)s1.size(), m = (int)s2.size();
        dp.assign(n, vector <int> (m, -1));
        cout << go() << '\n';
    }
    return 0;
}
