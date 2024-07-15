#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        if (tc > 1) cout << '\n';

        bool adj1[26][26]{};
        int m; cin >> m;
        while(m--) {
            char a, b; cin >> a >> b;
            adj1[a-'A'][b-'A'] = true;
        }

        bool adj2[26][26]{};
        cin >> m;
        while(m--) {
            char a, b; cin >> a >> b;
            adj2[a-'A'][b-'A'] = true;
        }

        for (int mi = 0; mi < 26; mi++) {
            for (int i = 0; i < 26; i++) {
                for (int j = 0; j < 26; j++) {
                    adj1[i][j] = adj1[i][j]|(adj1[i][mi]&adj1[mi][j]);
                    adj2[i][j] = adj2[i][j]|(adj2[i][mi]&adj2[mi][j]);
                }
            }
        }

        string ans = "YES";
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                if (adj1[i][j]^adj2[i][j]) ans = "NO";
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
