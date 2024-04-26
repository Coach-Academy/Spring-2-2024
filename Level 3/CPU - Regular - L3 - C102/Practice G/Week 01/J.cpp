#include <bits/stdc++.h>

using namespace std;

vector <int> ans;
vector <int> init, goal;
vector <vector <int>> adj;
void dfs(int cur, int par, int od = 0, int ev = 0, int lev = 0) {
    if (lev == 0) init[cur]^=ev;
    else init[cur]^=od;
    if (init[cur] != goal[cur]) {
        ans.push_back(cur+1);
        if (lev == 0) ev^=1;
        else od^=1;
    }
    for (auto &i : adj[cur]) {
        if (i == par) continue;
        dfs(i, cur, od, ev, lev^1);
    }
}

int main() {
    int n; cin >> n;
    adj.assign(n, {});
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    init.resize(n);
    goal.resize(n);
    for (auto &i : init) cin >> i;
    for (auto &i : goal) cin >> i;
    dfs(0, 0);
    cout << ans.size() << '\n';
    for (auto &i : ans) cout << i << '\n';
    return 0;
}
