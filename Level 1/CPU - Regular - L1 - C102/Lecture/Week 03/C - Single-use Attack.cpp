#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y, cnt = 1;
        cin >> h >> x >> y;
        h -= y;
        while (h > 0) {
            h -= x;
            cnt++;
        }
        cout << cnt << endl;
    }

}
