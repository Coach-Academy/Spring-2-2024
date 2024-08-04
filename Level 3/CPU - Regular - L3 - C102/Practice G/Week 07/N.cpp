#include <bits/stdc++.h>

using namespace std;

const int N = 85;
int dp[N][N];
string s1, s2;
int go(int i = 0, int j = 0) {
    if (i == s1.size() && j == s2.size()) return 0;
    auto &ret = dp[i][j];
    if (~ret) return ret;
    ret = 2e9;

    // delete the i-th charater
    if (i < s1.size()) ret = min(ret, 1+go(i+1, j));

    // replace it with the j-th charater from s2
    if (i < s1.size() && j < s2.size()) ret = min(ret, go(i+1, j+1)+(s1[i] != s2[j]));

    // insert the j-th charater before the i-th charater
    if (j < s2.size()) ret = min(ret, 1+go(i, j+1));

    return ret;
}

int id;
void bld(int i = 0, int j = 0, int realIdx = 1) {
    if (i == s1.size() && j == s2.size()) return;
    auto opt = go(i, j);

    // delete the i-th charater
    if (i < s1.size() && opt == 1+go(i+1, j)) {
        cout << id++ << " Delete " << realIdx << '\n';
        return bld(i+1, j, realIdx);
    }

    // insert the j-th charater before the i-th charater
    if (j < s2.size() && opt == 1+go(i, j+1)) {
        cout << id++ << " Insert " << realIdx << ',' << s2[j] << '\n';
        return bld(i, j+1, realIdx+1);
    }

    // replace it with the j-th charater from s2
    if (i < s1.size() && j < s2.size() && opt == go(i+1, j+1)+(s1[i] != s2[j])) {
        if (s1[i] != s2[j]) {
            cout << id++ << " Replace " << realIdx << ',' << s2[j] << '\n';
        }
        return bld(i+1, j+1, realIdx+1);
    }

}

int main() {
    bool fir = false;
    while(cin >> s1 >> s2) {
        if (!fir) cout << '\n';
        fir = false;
        memset(dp, -1, sizeof dp);
        cout << go() << '\n';
        id = 1;
        bld();
    }
    return 0;
}
