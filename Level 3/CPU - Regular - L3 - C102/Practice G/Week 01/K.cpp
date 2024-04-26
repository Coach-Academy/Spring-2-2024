#include <bits/stdc++.h>

using namespace std;

map <int, bool> vis;
map <int,  vector <int>> adj;
void dfs(int cur) {
    cout << cur << ' ';
    vis[cur] = true;
    for (auto &i : adj[cur]) {
        if (!vis[i]) dfs(i);
    }
}

int main() {
    int m; cin >> m;
    adj.clear(), vis.clear();
    map <int, int> frq;
    while (m--) {
        int u, v; cin >> u >> v;
        frq[u]++, frq[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (auto &[cur, f] : frq) {
        if (f == 1) {
            dfs(cur);
            break;
        }
    }
    cout << '\n';
    return 0;
}
