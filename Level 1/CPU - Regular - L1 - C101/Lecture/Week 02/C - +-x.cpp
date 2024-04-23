#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b, sub = a - b, mul = a * b;
    int mx = sum;
    if (mx < sub) {
        mx = sub;
    }
    if (mul > mx) {
        mx = mul;
    }
    cout << mx << endl;
}
