#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define X first
#define Y second

int main() {
    int n, m, q; 
    int tc = 1;
    while(cin >> n >> m >> q, n && m && q) {
        if (tc > 1) cout << '\n';
        vector <vector <int>> adj(n, vector <int> (n, 2e9));
        for (int i = 0; i < n; i++) adj[i][i] = 0;
        while(m--) {
            int u, v, w; cin >> u >> v >> w; u--, v--;
            adj[u][v] = min(adj[u][v], w);
            adj[v][u] = min(adj[v][u], w);
        }

        for (int mi = 0; mi < n; mi++) {
            for (int st = 0; st < n; st++) {
                for (int en = 0; en < n; en++) {
                    adj[st][en] = min(adj[st][en], max(adj[st][mi], adj[mi][en]));
                }
            }
        }
        cout << "Case #" << tc++ << '\n';
        while(q--) {
            int u, v; cin >> u >> v; u--, v--;
            if (adj[u][v] == (int)2e9) cout << "no path\n";
            else cout << adj[u][v] << '\n';
        }
    }

    return 0;
}