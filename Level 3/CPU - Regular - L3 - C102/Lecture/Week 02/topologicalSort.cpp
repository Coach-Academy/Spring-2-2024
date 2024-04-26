#include <bits/stdc++.h>

using namespace std;

vector <int> topologicalSort(vector <vector <int>> &adj) {
    int n = (int)adj.size();
    vector <int> in(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto &j : adj[i]) {
            in[j]++;
        }
    }
    queue <int> q;
    for (int i = 0; i < n; i++) {
        if (in[i] == 0) q.push(i);
    }

    vector <int> ord;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        ord.push_back(cur);
        for (auto &i : adj[cur]) {
            in[i]--;
            if (in[i] == 0) q.push(i);
        }
    }
    return ord;
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
