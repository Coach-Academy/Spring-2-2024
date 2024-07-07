#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1')
            cnt1++;
        else if (s[i] == '2')
            cnt2++;
        else if (s[i] == '3')
            cnt3++;
    }
    sum = cnt1 + cnt2 + cnt3;

    for (int i = 0; i < sum; ++i) {
        if (cnt1) {
            cout << 1;
            cnt1--;
        } else if (cnt2) {
            cout << 2;
            cnt2--;
        } else if (cnt3) {
            cout << 3;
            cnt3--;
        }
        if (i != sum - 1)
            cout << '+';
    }
}
