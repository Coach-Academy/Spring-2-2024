#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int stairWays = 0;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (v[i] == 1) {
            stairWays++;
            if (i - 1 >= 0) {
                ans.push_back(v[i - 1]);
            }
        }
        if (i == n - 1) {
            ans.push_back(v[i]);
        }
    }
    cout << stairWays << endl;
    for (auto &s: ans)
        cout << s << ' ';
}
