#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = 1;
    for (char i = 'a'; i <= 'z'; ++i) {
        if (s.find(i) == -1 and s.find(toupper(i)) == -1) {
            ans = 0;
        }
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}
