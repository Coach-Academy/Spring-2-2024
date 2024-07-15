#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    vector <vector <int>> dist(n, vector <int> (n, 2e9));
    vector <bool> exist(n, false);

    for (auto &i : dist) for (auto &j : i) cin >> j;

    vector <int> mids(n);
    for (auto &i : mids) cin >> i, i--;
    reverse(mids.begin(), mids.end());

    vector <ll> answers;
    for (auto &mi : mids) {
        exist[mi] = true;
        ll ans = 0;

        for (int mid = 0; mid < n; mid++) {
            if (!exist[mid]) continue;
            // st is mi
            for (int en = 0; en < n; en++) {
                if (!exist[en]) continue;
                dist[mi][en] = min(dist[mi][en], dist[mi][mid]+dist[mid][en]);
            }
        }

        for (int mid = 0; mid < n; mid++) {
            if (!exist[mid]) continue;
            // en is mi
            for (int st = 0; st < n; st++) {
                if (!exist[st]) continue;
                dist[st][mi] = min(dist[st][mi], dist[st][mid]+dist[mid][mi]);
            }
        }

        for (int st = 0; st < n; st++) {
            if (!exist[st]) continue;
            for (int en = 0; en < n; en++) {
                if (!exist[en]) continue;
                dist[st][en] = min(dist[st][en], dist[st][mi]+dist[mi][en]);
                ans+=dist[st][en];
            }
        }
        answers.push_back(ans);
    }

    reverse(answers.begin(), answers.end());

    for (auto &ans : answers) cout << ans << ' ';
    cout << '\n';

    return 0;
}
