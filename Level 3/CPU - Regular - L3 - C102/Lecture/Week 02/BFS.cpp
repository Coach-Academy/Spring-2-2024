#include <bits/stdc++.h>

using namespace std;

pair<vector <int>, vector <int>> bfs(int src, vector <vector <int>> &adj) {
    int n = (int)adj.size();
    queue <int> q;
    q.push(src);
    vector <int> dist(n, -1);
    vector <int> par(n, -1);
    dist[src] = 0;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for (auto &i : adj[cur]) {
            if (dist[i] != -1) continue;
            dist[i] = dist[cur]+1;
            par[i] = cur;
            q.push(i);
        }
    }
    return {dist, par};
}

vector <int> getPath(int src, int dist, vector <vector <int>> &adj) {
    auto [dummy, par] = bfs(src, adj);
    int cur = dist;
    vector <int> path;
    while(cur != -1) {
        path.push_back(cur);
        cur = par[cur];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int n, m; cin >> n >> m;
    vector <vector <int>> adj(n);
    while(m--) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
//    auto dist = bfs(0, adj);
//    cout << '\n';
//    for (auto &i : dist) cout << i <<' ';

    auto path = getPath(0, 6, adj);
    for (auto &i : path) cout << i << ' ';
    return 0;
}
