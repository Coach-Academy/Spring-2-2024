#include <bits/stdc++.h>

using namespace std;

vector <char> euler;
map <string, vector <string>> adj;

void dfs(string cur) {
    while(!adj[cur].empty()) {
        auto lst = adj[cur].back();
        adj[cur].pop_back();
        dfs(lst);
    }
    euler.push_back(cur[1]);
}

int main() {
    int n; cin >> n;
    map <string, int> in, out;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        auto u = s.substr(0, 2);
        auto v = s.substr(1);
        adj[u].push_back(v);
        out[u]++, in[v]++;
    }
    string st = "$";
    for (auto &[s, dum] : out) {
        if (abs(out[s]-in[s]) > 1) return cout << "NO\n", 0;
        if (out[s]-in[s] == 1) {
            if (st != "$") return cout << "NO\n", 0;
            st = s;
        }
    }
    if (st == "$") st = in.begin()->first;
    dfs(st);
    euler.push_back(st[0]);
    reverse(euler.begin(), euler.end());
    if (euler.size() != n+2) cout << "NO\n";
    else {
        cout << "YES\n";
        for (auto &i : euler) cout << i;
        cout << '\n';
    }
    return 0;
}
