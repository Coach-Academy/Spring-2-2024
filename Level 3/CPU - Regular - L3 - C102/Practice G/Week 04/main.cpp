#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

pair<vector <ll>, vector <int>> Dijkstra(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    priority_queue <pair<ll, int>, vector <pair<ll, int>>, greater<>> pq;
    pq.push({0, src});
    vector <ll> dist(n, 2e18);
    vector <int> par(n, -1);
    dist[src] = 0;
    while(!pq.empty()) {
        auto [dis, cur] = pq.top(); pq.pop();
        if (dis > dist[cur]) continue;
        for (auto &[i, w] : adj[cur]) {
            if (dist[i] <= dist[cur]+w) continue;
            dist[i] = dist[cur]+w;
            par[i] = cur;
            pq.push({dist[i], i});
        }
    }
    return {dist, par};
}

vector <int> getPath(int src, int dist, vector <vector <pair<int, int>>> &adj) {
    auto [dummy, par] = Dijkstra(src, adj);
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
    vector <vector <pair<int, int>>> adj(n);
    while(m--) {
        int u, v, w; cin >> u >> v >> w; u--, v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    auto [dist, dum] = Dijkstra(0, adj);
    if (dist[n-1] == (ll)2e18) {
        cout << -1;
        exit(0);
    }
    auto path = getPath(0, n-1, adj);
    for (auto &i : path) cout << i+1 << ' ';
    return 0;
}
