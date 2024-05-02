#include <bits/stdc++.h>

using namespace std;

vector <int> par;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    return par[s] = f, true;
}

int main() {
    int n, m; cin >> n >> m;
    par.resize(n);
    iota(par.begin(), par.end(), 0);
    int comps = n;
    vector <pair<int, int>>ed(m);
    for (auto &[u, v] : ed) cin >> u >> v, u--, v--;
    int q; cin >> q;
    vector <int> forb(q);
    vector <bool> isForb(m, false);
    for (auto &i : forb) {
        cin >> i; i--;
        isForb[i] = true;
    }
    for (int i = 0; i < m; i++) {
        if (isForb[i]) continue;
        auto &[u, v] = ed[i];
        if (uni(u, v)) comps--;
    }
    vector <int> ans(q);
    ans[q-1] = comps;
    for (int i = q-1; i; i--) {
        auto &[u, v] = ed[forb[i]];
        if (uni(u, v)) comps--;
        ans[i-1] = comps;
    }
    for (auto &i : ans) cout << i << ' ';
    cout << '\n';
    return 0;
}
