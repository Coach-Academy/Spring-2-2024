#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <vector <int>> adj(n);
    vector <pair<int, int>> broken;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        int t; cin >> t;
        if (t == 2) broken.emplace_back(u, v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue <int> q;
    q.push(0);
    vector <int> dep(n, -1), par(n, 0);
    dep[0] = 0;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for (auto &i : adj[cur]) {
            if (dep[i] != -1) continue;
            dep[i] = dep[cur]+1;
            par[i] = cur;
            q.push(i);
        }
    }

    vector <int> ord;
    for (auto &[u, v] : broken) {
        if (dep[u] > dep[v]) swap(u, v);
        ord.push_back(v);
    }
    sort(ord.begin(), ord.end(), [&](auto f, auto s) {
        return dep[f] > dep[s];
    });
    vector <int> vis(n, false);
    vector <int> ans;
    for (auto &i : ord) {
        if (vis[i]) continue;
        ans.push_back(i+1);
        while(!vis[i]) {
            vis[i] = true;
            i = par[i];
        }
    }
    cout << ans.size() << '\n';
    for (auto &i : ans) cout << i << ' ';
    cout << '\n';
    return 0;
}
