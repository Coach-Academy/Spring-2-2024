#include <bits/stdc++.h>

using namespace std;

vector <int> col;
vector <vector <int>> adj;
bool dfs(int cur) {
    bool ret = true;
    for (auto &i : adj[cur]) {
        if (col[i] == -1) {
            col[i] = col[cur]^1;
            ret&=dfs(i);
        }
        else if (col[i] == col[cur]) ret = false;
    }
    return ret;
}

int main() {
    int n, m; cin >> n >> m;
    adj.assign(n, {});
    col.assign(n, -1);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool bi = true;
    for (int i = 0; i < n; i++) {
        if (col[i] == -1) {
            col[i] = 0;
            bi&=dfs(i);
        }
    }
    if (bi) cout << "The graph is bipartite\n";
    else cout << "The graph is not bipartite\n";
    return 0;
}
