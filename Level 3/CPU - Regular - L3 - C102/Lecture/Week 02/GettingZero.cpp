#include <bits/stdc++.h>

using namespace std;

int main() {
    const int mod = 1<<15;
    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        queue <int> q;
        q.push(x);
        vector <int> dist(mod+1, -1);
        dist[x] = 0;
        int ans = 15;
        while(!q.empty()) {
            int cur = q.front(); q.pop();
            if (dist[cur] == 14) break;
            int add = cur+1;
            if (add >= mod) add-=mod;
            int mul = cur*2;
            if (mul >= mod) mul-=mod;
            if (dist[add] == -1) {
                if (add == 0) {
                    ans = dist[cur]+1;
                    break;
                }
                dist[add] = dist[cur]+1;
                q.push(add);
            }
            if (dist[mul] == -1) {
                if (mul == 0) {
                    ans = dist[cur]+1;
                    break;
                }
                dist[mul] = dist[cur]+1;
                q.push(mul);
            }
        }
        cout << ans << ' ';
    }
    return 0;
}
