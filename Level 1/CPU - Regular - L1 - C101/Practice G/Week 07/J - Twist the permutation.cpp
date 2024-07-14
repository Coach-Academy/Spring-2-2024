#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), pos(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            pos[v[i] - 1] = i;
        }
        for (int i = n - 1; i >= 0; --i) {
            int position = pos[i];
            for (int j = position; j < v.size(); ++j)
                cout << v[j] << ' ';

            int numberOfElementsToDelete = v.size() - position;
            for (int j = 0; j < numberOfElementsToDelete; ++j) {
                v.pop_back();
            }

        }
        cout << endl;
    }
}
