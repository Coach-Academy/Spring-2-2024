#include <bits/stdc++.h>

using namespace std;

bool isPal(string s) {
    string revS = s;
    reverse(revS.begin(), revS.end());
    return s == revS;
}

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < 10; ++i) {
        if (isPal(s)) {
            cout << "Yes\n";
            return 0;
        }
        s = '0' + s;
    }
    cout << "No\n";
}
