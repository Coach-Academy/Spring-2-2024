#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> earn(n);
        int id = 0;
        map <string, int> ids;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            string num;
            while(s.back() != ' ') {
                num.push_back(s.back());
                s.pop_back();
            }
            s.pop_back();
            reverse(num.begin(), num.end());
            earn[id] = stoi(num);
            ids[s] = id++;
        }
        vector <vector <int>> adj(n);
        while(m--) {
            string s;
            getline(cin, s);
            string f, se;
            int i = 0;
            while(s[i] != '-') f.push_back(s[i++]);
            f.pop_back();
            i+=4;
            while(i < s.size()) se.push_back(s[i++]);
            adj[ids[se]].push_back(ids[f]);
        }

        vector <int> myMsk(n, 0);
        for (int i = 0; i < n; i++) {
            for (auto &j : adj[i]) {
                myMsk[i]|=(1<<j);
            }
        }
        vector <int> dp(1<<n, -2e9);
        dp[0] = 0;
        for (int msk = 0; msk < (1<<n); msk++) {
            int pb = __builtin_popcount(msk);
            int day = pb+1;
            for (int i = 0; i < n; i++) {
                if (msk>>i&1) continue;
                if ((myMsk[i]&msk) != myMsk[i]) continue;
                int nmsk = msk|(1<<i);
                dp[nmsk] = max(dp[nmsk], dp[msk]+day*earn[i]);
            }
        }
        cout << dp[(1<<n)-1] << '\n';
    }
    return 0;
}
