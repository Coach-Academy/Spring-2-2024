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

    int n; cin >> n;
    string s; cin >> s;
    Hash hsh(s);
    int q; cin >> q;
    while(q--) {
        int i, j, k, l; cin >> i >> j >> k >> l;
        i--, j--, k--, l--;
        if (j-i != l-k) {
            cout << "DIFFERENT\n";
            continue;
        }
        int st = 1, en = j-i+1;
        while(st <= en) {
            int mi = (st+en)/2;
            if (hsh.getRangeHashVal(i, i+mi-1)
                == hsh.getRangeHashVal(k, k+mi-1)) st = mi+1;
            else en = mi-1;
        }
        int len = st-1;
        if (len >= j-i ||
            hsh.getRangeHashVal(i+len+1, j)
            == hsh.getRangeHashVal(k+len+1, l)) {
            cout << "SIMILAR\n";
        }
        else {
            cout << "DIFFERENT\n";
        }
    }
    return 0;
}