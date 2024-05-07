#include <bits/stdc++.h>

using namespace std;

vector <int> par, lst;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

vector <vector <int>> adj;
bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    adj[lst[f]].push_back(s);
    adj[s].push_back(lst[f]);
    return par[s] = f, lst[f] = lst[s], true;
}

void dfs(int cur, int p) {
    cout << cur+1 << ' ';
    for (auto &i : adj[cur]) {
        if (i == p) continue;
        dfs(i, cur);
    }
}

int main() {
    int n; cin >> n;
    adj.assign(n, {});
    par.resize(n), lst.resize(n);
    iota(par.begin(), par.end(), 0);
    iota(lst.begin(), lst.end(), 0);
    int rt;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        uni(u, v);
        rt = fnd(u);
    }
    dfs(rt, rt);
    cout << '\n';
    return 0;
}
