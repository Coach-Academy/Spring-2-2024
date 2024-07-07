#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 48 and s[i] <= 57) {
            cout << s[i];
            if (i != s.size() - 1)
                cout << "+";
        }
    }
}
