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
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    vis.assign(n, false);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // check connectivity
    if (dfs(0) == n) cout << "the graph is connected\n";
    else cout << "the graph is not connected\n";

    // check the existence of a path
    int st, en; cin >> st >> en;
    st--, en--;
    dfs(st);
    if (vis[en]) cout << "I can go between the two nodes\n";
    else cout << "I can not go between the two nodes\n";
    return 0;
}
