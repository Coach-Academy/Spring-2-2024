#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0, patient = 0;
        bool check = false;
        for (int i = 0; i < n; ++i) {
            char state;
            cin >> state;
            if (state == 'A') {
                check = true;
                ans = max(ans, patient);
                patient = 0;
            } else if (state == 'P' and check == true) {
                patient++;
            }
        }
        cout << max(ans, patient) << endl;
    }
}
