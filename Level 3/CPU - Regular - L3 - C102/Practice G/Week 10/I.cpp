#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e6+10;
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

    string s[3];
    Hash h[3];
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
        h[i] = Hash(s[i]);
    }
    set <int> active{0, 1, 2};
    for (int i = 0; i < 3; i++) {
        bool skip = false;
        int len = (int)s[i].size();
        auto me = h[i].getHashVal();
        for (auto &j : active) {
            if (i == j) continue;
            for (int st = 0, en = len-1; en < s[j].size(); en++, st++) {
                if (me == h[j].getRangeHashVal(st, en)) skip = true;
            }
        }
        if (skip) active.erase(i);
    }

    vector <int> subs(active.begin(), active.end());
    int ans = 2e9;
    do {
        int tans = 0;
        for (int i = 0; i < subs.size(); i++) {
            tans+=(int)s[subs[i]].size();
            int bef = i-1;
            if (bef == -1) continue;
            int len = (int)min(s[subs[i]].size(), s[subs[bef]].size());
            for ( ; len > 0; len--) {
                if (h[subs[bef]].getRangeHashVal((int)s[subs[bef]].size()-len, (int)s[subs[bef]].size()-1)
                    == h[subs[i]].getRangeHashVal(0, len-1)) break;
            }
            tans-=len;
        }
        ans = min(ans, tans);
    } while(next_permutation(subs.begin(), subs.end()));

    cout << ans << '\n';
    return 0;
}