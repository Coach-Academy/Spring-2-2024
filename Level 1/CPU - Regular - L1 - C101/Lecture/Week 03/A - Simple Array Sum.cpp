#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        sum += s;
    }
    cout << sum << endl;
}