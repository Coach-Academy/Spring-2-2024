#include <bits/stdc++.h>

using namespace std;

map <string, bool> vis;
map <string,  vector <string>> adj;
int dfs(string cur) {
    vis[cur] = true;
    int ret = 1;
    for (auto &i : adj[cur]) {
        if (!vis[i]) ret+=dfs(i);
    }
    return ret;
}

int main() {
    int n, m;
    while(cin >> n >> m, n) {
        vector <string> nodes(n);
        for (auto &i : nodes) cin >> i;
        adj.clear();
        vis.clear();
        while (m--) {
            string u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int mx = 0;
        for (auto &i : nodes) {
            if (!vis[i]) {
                mx = max(mx, dfs(i));
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
