#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define AboTaha_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define X first
#define Y second

const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const ll M = 1e9+7, M2 = 998244353;
const double EPS = 1e-8;

int ptr[50];
vector <bool> vis;
vector <int> euler;
vector <pair<int, int>> adj[50];

void dfs(int cur)
{
    while(ptr[cur] < adj[cur].size()) {
        auto [v, ed] = adj[cur][ptr[cur]++];
        if (vis[ed]) continue;
        vis[ed] = true;
        dfs(v);
        euler.push_back(v+1);
    }
}

void burn(int tc)
{
    int n; cin >> n;
    euler.clear();
    vis.assign(n, false);
    memset(ptr, 0, sizeof ptr);
    for (auto &i : adj) i.clear();
    for (int i = 0; i < n; i++) {
        int u, v; cin >> u >> v;
        u--, v--;
        adj[u].emplace_back(v, i);
        adj[v].emplace_back(u, i);
    }
    bool ok = true;
    int st;
    for (int i = 0; i < 50; i++) {
        if (!adj[i].empty()) st = i;
        if (adj[i].size()&1) ok = false;
    }
    dfs(st);
    ok&=euler.size() == n;
    if (!ok) cout << "some beads may be lost\n";
    else {
        for (int i = 0; i < n; i++) {
            cout << euler[i] << ' ' << euler[(i+1)%n] << '\n';
        }
    }
}

int main()
{
    AboTaha_on_da_code

//    freopen("zeros.in", "r", stdin);
//    freopen("Aout.txt", "w", stdout);

    int T = 1; cin >> T;

    for (int i = 1; i <= T; i++) {
        cout << "Case #" << i << '\n';
        burn(i);
        cout << '\n';
    }
    return 0;
}