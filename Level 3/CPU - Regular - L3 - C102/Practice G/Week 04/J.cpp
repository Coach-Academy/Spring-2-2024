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
    int n, k;
    while(cin >> n >> k) {
        vector <int> T(n);
        for (auto &i : T) cin >> i;

        vector <vector <int>> dist[101][101];
        for (auto &i : dist) for (auto &j : i) j.assign(n, vector <int> (2, 2e9));

        vector <pair<int, int>> log(n);
        for (int el = 0; el < n; el++) {
            vector <int> vec;
            string s;
            getline(cin, s);
            stringstream ss(s);
            int cur;
            while (ss >> cur) vec.push_back(cur);
            for (int st = 0; st < vec.size(); st++) {
                for (int en = st; en < vec.size(); en++) {
                    int tim = (en-st)*T[el];
                    dist[st][en][el][0] = min(dist[st][en][el][0], tim);
                    dist[en][st][el][1] = min(dist[en][st][el][1], tim);

                    int timDown = (st-vec[0])*T[el]+(en-vec[0])*T[el];
                    int timUp = (vec.back()-en)*T[el]+(vec.back()-st)*T[el];
                    dist[st][en][el][1] = min(dist[st][en][el][1], timDown);
                    dist[en][st][el][0] = min(dist[en][st][el][0], timUp);
                }
            }
            for (int i = 0; i < n; i++) log[i] = {vec[0], 0};
        }
    }
    return 0;
}
