#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    if (m != n) return cout << "NO\n", 0;
    vector <vector <int>> adj(n);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <bool> vis(n, false);
    vis[0] = true;
    queue <int> q;
    q.push(0);
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for (auto &i : adj[cur]) {
            if (!vis[i]) {
                vis[i] = true;
                q.push(i);
            }
        }
    }
    cout << (count(vis.begin(), vis.end(), false) == 0 ? "FHTAGN!\n" : "NO\n");
    return 0;
}
