#include <bits/stdc++.h>

using namespace std;

vector <bool> vis;
vector <vector <int>> adj;

// this is true only for undirected graphs
bool dfs1(int cur, int par) {
    bool ret = false;
    vis[cur] = true;
    for (auto &i : adj[cur]) {
        if (!vis[i]) ret|=dfs1(i, cur);
        else if (par != i) ret = true;
    }
    return ret;
}

// general algorithm
vector <bool> cyc;
bool dfs(int cur, int par) {
    bool ret = false;
    vis[cur] = cyc[cur] = true;
    for (auto &i : adj[cur]) {
        if (par == i) continue;
        if (!vis[i]) ret|=dfs(i, cur);
        else if (cyc[i]) ret = true;
    }
    cyc[cur] = false;
    return ret;
}

int main() {
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    vis.assign(n, false);
    cyc.assign(n, false);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
//        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i] && dfs(i, i)) {
            cout << "there is a cycle\n";
            exit(0);
        }
    }
    cout << "there is no cycles\n";
    return 0;
}
