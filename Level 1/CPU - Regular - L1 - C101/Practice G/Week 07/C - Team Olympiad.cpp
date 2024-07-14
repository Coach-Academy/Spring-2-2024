#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n), vecMath, vecProg, vecPe;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) {
            vecProg.push_back(i + 1);
        } else if (v[i] == 2) {
            vecMath.push_back(i + 1);
        } else {
            vecPe.push_back(i + 1);
        }
    }
    int numOfTeams = min({vecMath.size(), vecProg.size(), vecPe.size()});
    cout << numOfTeams << endl;
    for (int i = 0; i < numOfTeams; ++i) {
        cout << vecMath.back() << ' ';
        cout << vecProg.back() << ' ';
        cout << vecPe.back() << '\n';
        vecMath.pop_back();
        vecProg.pop_back();
        vecPe.pop_back();
    }
}
