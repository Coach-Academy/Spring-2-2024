#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;

//    vector <vector <bool>> adjMat(n, vector <bool> (n, false));
//    while(m--) {
//        int u, v; cin >> u >> v; u--, v--;
//        adjMat[u][v] = true; // directed
//
//        { // undirected
//            adjMat[u][v] = true;
//            adjMat[v][u] = true;
//        }
//    }

//    vector <pair<int, int>> edges(m);
//    for (auto &[i, j] : edges) cin >> i >> j, i--, j--;

    vector <vector <int>> adj(n);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;

        adj[u].push_back(v); // directed

        { // undirected
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    return 0;
}
