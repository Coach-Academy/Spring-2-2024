#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y, attacks = 0;
        cin >> h >> x >> y;
        h -= y;
        attacks++;
        while (h > 0) {
            h -= x;
            attacks++;
        }
        cout << attacks << endl;
    }
}
