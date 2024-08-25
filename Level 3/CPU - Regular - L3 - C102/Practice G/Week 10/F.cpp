#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 2e5+10;
int p1, p2;
vector<ll> pw1(N), pw2(N);

const int MOD = 1e9+7;

void pre() {
    srand(time(0));
    p1 = rand()%MOD, p2 = rand()%MOD;
    pw1[0] = 1, pw2[0] = 1;
    for (int i = 1; i < N; ++i) {
        pw1[i] = (pw1[i - 1] * p1) % MOD;
        pw2[i] = (pw2[i - 1] * p2) % MOD;
    }
}


struct Hash {
    vector<pair<int, int>> prefixHash;

    Hash() {}

    Hash(string &s) {
        prefixHash = vector<pair<int, int >>(s.size(), {0, 0});
        for (int i = 0; i < s.size(); i++) {
            prefixHash[i].first = ((ll) s[i] * pw1[i]) % MOD;
            prefixHash[i].second = ((ll) s[i] * pw2[i]) % MOD;
            if (i)
                prefixHash[i] = {(prefixHash[i].first + prefixHash[i - 1].first) % MOD,
                                 (prefixHash[i].second + prefixHash[i - 1].second) % MOD};
        }
    }

    pair<int, int> getHashVal() {
        pair<int, int> result = prefixHash.back();
        result.first = (result.first * pw1[N - 1]) % MOD;
        result.second = (result.second * pw2[N - 1]) % MOD;
        return result;
    }

    pair<int, int> getRangeHashVal(int l, int r) {
        return {(((prefixHash[r].first - (l ? prefixHash[l - 1].first : 0) + MOD) % MOD) * pw1[N - l - 1]) % MOD,
                (((prefixHash[r].second - (l ? prefixHash[l - 1].second : 0) + MOD) % MOD) * pw2[N - l - 1]) % MOD};
    }
};

int main() {

    pre();

    string s;
    while(cin >> s) {
        int n = (int)s.size();
        auto rs = s;
        reverse(rs.begin(), rs.end());
        Hash h(s), rh(rs);
        int len = n;
        for ( ; len; len--) {
            auto hsh = h.getRangeHashVal(n-len, n-1);
            auto hshr = rh.getRangeHashVal(0, len-1);
            if (hsh == hshr) break;
        }
        for (int i = n-len-1; ~i; i--) {
            s.push_back(s[i]);
        }
        cout << s << '\n';
    }
    return 0;
}