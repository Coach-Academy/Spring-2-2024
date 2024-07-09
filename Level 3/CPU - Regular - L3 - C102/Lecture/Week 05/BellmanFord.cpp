#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define X first
#define Y second

vector <ll> BellmanFord(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    vector <ll> dist(n, 2e18);

    dist[src] = 0;
    for (int it = 0; it < n-1; it++) {
        bool in = false;
        for (int i = 0; i < n; i++) {
            for (auto &to : adj[i]) {
                int j = to.X, w = to.Y;
                if (dist[j] > dist[i]+w) {
                    in = true;
                    dist[j] = dist[i]+w;
                }
            }
        }
        if (!in) return dist;
    }

    for (int i = 0; i < n; i++) {
        for (auto &to : adj[i]) {
            int j = to.X, w = to.Y;
            if (dist[j] > dist[i]+w) { // there is for sure a negative cycle
                return vector <ll> (n, -1);
            }
        }
    }
    return dist;
}

int main() {
    
    return 0;
}