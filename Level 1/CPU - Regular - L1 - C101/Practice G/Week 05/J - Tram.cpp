#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, mx = INT_MIN;
    for (int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        sum -= a;
        sum += b;
        mx = max(mx, sum);
    }
    cout << mx << endl;
}
