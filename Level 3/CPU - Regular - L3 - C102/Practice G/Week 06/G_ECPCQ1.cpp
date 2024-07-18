#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <random>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define AboTaha_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define X first
#define Y second

const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1};
const int dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const double EPS = 1e-8;
const int mod = 1e9+7; // 1e9+7, 998244353
const int phi = 1e9+6; // 1e9+6, 998244352
// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.

void burn(int tc) {
    int n, m; cin >> n >> m;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    vector <vector <int>> adj(n);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <map<int, ll>> dist(n);
    dist[0][0] = 0;
    priority_queue <array <ll, 3>, vector <array <ll, 3>>, greater<>> pq;
    pq.push({0, 0, 0});
    while(!pq.empty()) {
        auto [cost, node, pos] = pq.top(); pq.pop();
        if (dist[node].find(pos) != dist[node].end() && dist[node][pos] < cost) continue;
        for (auto &i : adj[node]) {
            auto addedCost = (pos+1)*(pos+1);
            auto toPos = addedCost%a[i];
            int nCost = cost+addedCost;
            if (dist[i].find(toPos) == dist[i].end() || dist[i][toPos] > nCost) {
                dist[i][toPos] = nCost;
                pq.push({nCost, i, toPos});
            }
        }
    }
    int q; cin >> q;
    while(q--) {
        int v, x; cin >> v >> x; v--;
        if (dist[v].find(x) == dist[v].end()) cout << "-1\n";
        else cout << dist[v][x] << '\n';
    }
}

int main()
{
    AboTaha_on_da_code

//    freopen("cheat.in", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int T = 1; cin >> T;

    for (int i = 1; i <= T; i++) {
//        cout << "Case " << i << ": ";
        burn(i);
//        cout << '\n';
    }
    return (0-0);
}