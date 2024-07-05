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
    int n, m, s; cin >> n >> m >> s; s--;
    vector <vector <pair<int, int>>> adj(n);
    vector <array <int, 3>> ed;
    while(m--) {
        int u, v, w; cin >> u >> v >> w; u--, v--;
        ed.push_back({v, u, w});
        ed.push_back({u, v, w});
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int l; cin >> l;

    auto dist = Dijkstra(s, adj).first;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (dist[i] == l) ans++;
    }

    int mid = 0;
    for (auto &[u, v, w] : ed) {
        if (dist[u] < l && dist[u]+w > l) {
            if (l-dist[u] < dist[v]+w-l) ans++;
            if (l-dist[u] == dist[v]+w-l) mid++;
        }
    }
    cout << ans+mid/2 << '\n';
    return 0;
}
