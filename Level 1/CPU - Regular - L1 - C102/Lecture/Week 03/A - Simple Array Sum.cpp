#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        sum += s;
    }
    cout << sum << endl;
}
