#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
int mpow(int a, int b) {
    int res = 1;
    while(b) {
        if (b&1) res = 1LL*res*a%mod;
        a = 1LL*a*a%mod, b/=2;
    }
    return res;
}

vector <int> par, sz;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    return par[s] = f, sz[f]+=sz[s], sz[s] = 0, true;
}

int main() {
    int n, k; cin >> n >> k;
    par.resize(n);
    iota(par.begin(), par.end(), 0);
    sz.assign(n, 1);
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        int c; cin >> c;
        if (c == 1) continue;
        uni(u, v);
    }
    int bad = 0;
    for (auto &i : sz) {
        bad+=mpow(i, k);
        if (bad >= mod) bad-=mod;
        if (bad < 0) bad+=mod;
    }
    int tot = mpow(n, k);
    int good = tot-bad;
    if (good < 0) good+=mod;
    cout << good << '\n';
    return 0;
}
