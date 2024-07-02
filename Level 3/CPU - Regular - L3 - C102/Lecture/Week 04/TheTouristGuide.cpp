#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

pair<vector <ll>, vector <int>> Dijkstra(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    priority_queue <pair<ll, int>> pq;
    pq.push({2e18, src});
    vector <ll> mn(n, -2e18);
    vector <int> par(n, -1);
    mn[src] = 2e18;
    while(!pq.empty()) {
        auto [lim, cur] = pq.top(); pq.pop();
        if (lim < mn[cur]) continue;
        for (auto &[i, w] : adj[cur]) {
            if (mn[i] >= min(mn[cur], (ll)w)) continue;
            mn[i] = min(mn[cur], (ll)w);
            par[i] = cur;
            pq.push({mn[i], i});
        }
    }
    return {mn, par};
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
    int n, m;
    int tc = 1;
    while(cin >> n >> m, n) {
        cout << "Scenario #" << tc++ << '\n';
        cout << "Minimum Number of Trips = ";
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        int a, b, tot;
        cin >> a >> b >> tot;
        a--, b--;
        auto[mn, dum] = Dijkstra(a, adj);
        ll lim = mn[b] - 1;
        cout << (a == b ? 0 : (tot + lim - 1) / lim) << "\n\n";
    }
    return 0;
}
