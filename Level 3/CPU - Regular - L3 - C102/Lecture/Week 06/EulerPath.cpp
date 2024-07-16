#include <bits/stdc++.h>

using namespace std;

vector <int> euler;
vector <vector <int>> adj;

void dfs(int cur) {
    while(!adj[cur].empty()) {
        auto lst = adj[cur].back();
        adj[cur].pop_back();
        dfs(lst);
    }
    euler.push_back(cur);
}

int main() {
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    vector <int> in(n, 0), out(n, 0);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        in[v]++, out[u]++;
    }
    bool bad = false;
    int st = -1, en = -1;
    for (int i = 0; i < n; i++) {
        if (abs(out[i]-in[i]) > 1) bad = true;
        if (out[i]-in[i] == 1) {
            if (st == -1) st = i;
            else bad = true;
        }

        if (in[i]-out[i] == 1) {
            if (en == -1) en = i;
            else bad = true;
        }
    }

    if (bad) return cout << "There is no eulerian path\n", 0;

    if (st == -1) st = 0;

    euler.clear();
    dfs(st);

    if (euler.size() < n) return cout << "There is no eulerian path\n", 0;

    reverse(euler.begin(), euler.end());
    for (auto &i : euler) cout << i+1 << ' ';
    cout << '\n';
    return 0;
}
