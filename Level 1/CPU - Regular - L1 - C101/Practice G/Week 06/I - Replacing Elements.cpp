#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        bool check = false;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] > d)
                check = true;
        }
        if (!check) {
            cout << "Yes\n";
        } else {
            sort(arr, arr + n);
            if (arr[0] + arr[1] <= d)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
