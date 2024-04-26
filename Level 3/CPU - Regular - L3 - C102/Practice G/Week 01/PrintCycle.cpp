#include <bits/stdc++.h>

using namespace std;

vector <int> par; // par[cur] = the node that made into node cur.
vector <bool> vis, cyc;
vector <vector <int>> adj;
void dfs(int cur) {
    vis[cur] = cyc[cur] = true;
    for (auto &i : adj[cur]) {
        if (par[cur] == i) continue;
        if (!vis[i]) {
            par[i] = cur;
            dfs(i);
        }
        else if (cyc[i]) {
            cout << i+1 << ' ';
            int node = cur;
            while(node != i) {
                cout << node+1 << ' ';
                node = par[node];
            }
            cout << '\n';
            exit(0);
        }
    }
    cyc[cur] = false;
}

int main() {
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    par.assign(n, -1);
    vis.assign(n, false);
    cyc.assign(n, false);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) dfs(i);
    }
    cout << "there is no cycles\n";
    return 0;
}
