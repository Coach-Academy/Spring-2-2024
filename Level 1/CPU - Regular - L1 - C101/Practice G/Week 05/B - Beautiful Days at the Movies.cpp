#include <bits/stdc++.h>

using namespace std;


bool isBeautiful(int day, int k) {
    string s = to_string(day);
    reverse(s.begin(), s.end());
    int revNum = stoi(s);
    return abs(revNum - day) % k == 0;
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
