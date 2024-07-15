#include <bits/stdc++.h>

using namespace std;

using ll = long long;

pair<vector <ll>, vector <int>> Dijkstra(int src, vector <vector <array <int, 3>>> &adj) {
    int n = (int)adj.size();
    priority_queue <pair<ll, int>, vector <pair<ll, int>>, greater<>> pq;
    pq.push({0, src});
    vector <ll> dist(n, 2e18);
    vector <int> par(n, -1);
    dist[src] = 0;
    while(!pq.empty()) {
        auto [dis, cur] = pq.top(); pq.pop();
        if (dis > dist[cur]) continue;
        for (auto &[i, w, dum] : adj[cur]) {
            if (dist[i] <= dist[cur]+w) continue;
            dist[i] = dist[cur]+w;
            par[i] = cur;
            pq.push({dist[i], i});
        }
    }
    return {dist, par};
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector <vector <array <int, 3>>> adj(n);
    while(m--) {
        int u, v, w; cin >> u >> v >> w; u--, v--;
        adj[u].push_back({v, w, 0});
        adj[v].push_back({u, w, 0});
    }

    vector <pair<int, int>> stations(k);
    for (int i = 0; i < k; i++) {
        int v, w; cin >> v >> w; v--;
        adj[0].push_back({v, w, 1});
        stations[i] = {v, w};
    }

    auto [dist, dum] = Dijkstra(0, adj);

    vector <vector <pair<int, int>>> adj2(n);
    
    vector <int> in(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto &[j, w, status] : adj[i]) {
            if (dist[i]+w == dist[j]) {
                adj2[i].push_back({j, status});
                in[j]++;
            }
        }
    }
    int remove = 0;
    for (auto &[i, w] : stations) {
        if (dist[i] < w) remove++;
        else if (dist[i] == w) {
            if (in[i] > 1) {
                remove++;
                in[i]--;
            }
        }
    }

    cout << remove << '\n';
    return 0;
}
