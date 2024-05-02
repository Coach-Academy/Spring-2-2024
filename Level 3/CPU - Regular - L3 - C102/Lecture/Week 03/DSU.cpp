#include <bits/stdc++.h>

using namespace std;

vector <int> par;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

bool check(int f, int s) {
    f = fnd(f), s = fnd(s);
    return f == s;
}

bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    return par[s] = f, true;
}

int main() {
    int n, m; cin >> n >> m;
    par.resize(n);
    iota(par.begin(), par.end(), 0); // 0, 1, 2, 3....
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        uni(u, v);
    }
    int q; cin >> q;
    while(q--) {
        int u, v; cin >> u >> v; u--, v--;
        if (check(u, v)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
