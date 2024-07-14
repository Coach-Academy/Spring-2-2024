#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == 'R' and s[i + 1] == 'L') {
            ans = min(ans, (v[i + 1] - v[i]) / 2);
        }
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
