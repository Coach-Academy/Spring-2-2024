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
    vector <array <int, 3>> ed(m);
    for (auto &[w, u, v] : ed) cin >> u >> v >> w, u--, v--;
    sort(ed.begin(), ed.end());
    long long cost = 0;
    vector <vector <pair<int, int>>> adj(n);
    for (auto &[w, u, v] : ed) {
        if (uni(u, v)) {
            cost+=w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
    }
    cout << cost << '\n';
    return 0;
}
