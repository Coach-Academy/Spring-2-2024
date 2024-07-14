#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i].first;
        dq[i].second = i + 1;
    }
    while (dq.size() > 1) {
        dq.front().first -= m;
        if (dq.front().first > 0) {
            dq.push_back(dq.front());
        }
        dq.pop_front();
    }
    cout << dq.front().second << endl;
}
