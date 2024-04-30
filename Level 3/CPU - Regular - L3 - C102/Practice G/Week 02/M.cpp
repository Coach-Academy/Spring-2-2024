#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <vector <int>> adj(n);
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <int> par(n, -1);
    queue <int> q;
    q.push(0);
    vector <int> col(n, 0);
    col[0] = 1;
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        set <int> used;
        if (par[cur] != -1) used.insert(col[par[cur]]);
        used.insert(col[cur]);
        int mex = 1;
        for (auto &i : adj[cur]) {
            if (i == par[cur]) continue;
            while(used.count(mex)) mex++;
            used.insert(mex);
            col[i] = mex;
            par[i] = cur;
            q.push(i);
        }
    }
    cout << *max_element(col.begin(), col.end()) << '\n';
    for (auto &i : col) cout << i << ' ';
    cout << '\n';
    return 0;
}
