#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n], sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    long long x;
    cin >> x;
    long long freq = x / sum;
    freq *= n;
    x %= sum;
    for (int i = 0; i < n and x >= 0; ++i) {
        x -= arr[i];
        freq++;
    }
    cout << freq << endl;
}
