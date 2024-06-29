#include <bits/stdc++.h>

using namespace std;


bool isBeautiful(int day, int k) {
    int revDay = 0, tmpDay = day;
    while (tmpDay) {
        revDay *= 10;
        revDay += (tmpDay % 10);
        tmpDay /= 10;
    }
    return abs(revDay - day) % k == 0;
}

int main() {
    int l, r, k;
    cin >> l >> r >> k;
    int ans = 0;
    for (int day = l; day <= r; ++day) {
        ans += isBeautiful(day, k);
    }
    cout << ans << endl;
}
