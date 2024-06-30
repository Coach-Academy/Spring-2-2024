#include <bits/stdc++.h>

using namespace std;

bool isAmazing(int performance, int &best, int &worst) {
    if (performance > best) {
        best = performance;
        return 1;
    }
    if (performance < worst) {
        worst = performance;
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int best = 0, worst = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i == 0) {
            best = arr[i];
            worst = arr[i];
        }
        ans += isAmazing(arr[i], best, worst);
    }
    cout << ans << endl;

}
