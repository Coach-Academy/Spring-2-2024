#include <bits/stdc++.h>

using namespace std;

vector <bool> vis;
vector <vector <int>> adj;
int dfs(int cur) {
    vis[cur] = true;
    int ret = 1;
    for (auto &i : adj[cur]) {
        if (!vis[i]) ret+=dfs(i);
    }
    return ret;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        adj.assign(n, {});
        vis.assign(n, false);
        while (m--) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                mx = max(mx, dfs(i));
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
