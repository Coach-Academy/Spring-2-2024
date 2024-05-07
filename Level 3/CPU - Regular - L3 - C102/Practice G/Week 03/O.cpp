#include <bits/stdc++.h>

using namespace std;

vector <int> par;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

vector <vector <int>> adj;
bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    return par[s] = f, true;
}

int main() {
    int n; cin >> n;
    par.resize(n);
    iota(par.begin(), par.end(), 0);
    vector <pair<int, int>> bad;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        if (!uni(u, v)) bad.push_back({u, v});
    }
    vector <int> rep;
    for (int i = 0; i < n; i++) {
        if (i == par[i]) rep.push_back(i);
    }
    assert(bad.size()+1 == rep.size());
    cout << bad.size() << '\n';
    for (int i = 1; i < rep.size(); i++) {
        auto &[u1, v1] = bad.back();
        auto u2 = rep[i-1], v2 = rep[i];
        cout << u1+1 << ' ' << v1+1 << ' ' << u2+1 << ' ' << v2+1 << '\n';
    }
    return 0;
}
