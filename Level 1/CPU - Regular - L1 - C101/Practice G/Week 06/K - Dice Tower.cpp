#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (i == 0)
            continue;
        if (x == a or x == (7 - a) or x == b or x == (7 - b)) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
