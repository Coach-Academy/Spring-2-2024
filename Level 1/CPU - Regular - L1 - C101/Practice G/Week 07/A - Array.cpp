#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }
    sort(dq.begin(), dq.end());
    cout << "1 " << dq.front() << endl;
    dq.pop_front();
    if (dq.back() > 0) {
        cout << "1 " << dq.back() << endl;
        dq.pop_back();
    } else {
        cout << "2 " << dq.front() << ' ';
        dq.pop_front();
        cout << dq.front() << endl;
        dq.pop_front();
    }
    cout << dq.size() << ' ';
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << ' ';
    }
    cout << endl;
}
