#include <bits/stdc++.h>

using namespace std;

vector <int> par;

int fnd(int ch) {
    if (par[ch] == ch) return ch;
    return par[ch] = fnd(par[ch]);
}

bool uni(int f, int s) {
    f = fnd(f), s = fnd(s);
    if (f == s) return false;
    return par[s] = f, true;
}

int main() {
    int n;
    while(cin >> n) {
        par.resize(n);
        iota(par.begin(), par.end(), 0);
        vector <array <int, 3>> ed(n*n);
        for (int u = 0; u < n; u++) {
            for (int v = 0; v < n; v++) {
                int c; cin >> c;
                ed[u*n+v] = {c, u, v};
            }
        }
        sort(ed.begin(), ed.end());
        long long cost = 0;
        for (int i = 0; i < n*n; i++) {
            auto w = ed[i][0], u = ed[i][1], v = ed[i][2];
            if (uni(u, v)) {
                cost+=w;
            }
        }
        cout << cost << '\n';
    }
    return 0;
}
