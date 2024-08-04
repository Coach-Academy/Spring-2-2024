#include <bits/stdc++.h>

using namespace std;



const int N = 2010, mod = 1e9+7;
vector <int> divs[N];
void pre() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j+=i) {
            divs[j].push_back(i);
        }
    }
}
int dp[N][N];
int n, k;
int go(int idx = 0, int lst = 2001) {
    if (idx == k) return 1;
    auto &ret = dp[idx][lst];
    if (~ret) return ret;
    ret = 0;
    if (lst == 2001) {
        for (int i = 1; i <= n; i++) {
            ret+=go(idx+1, i);
            if (ret >= mod) ret-=mod;
        }
    }
    else {
        for (auto &i : divs[lst]) {
            ret+=go(idx+1, i);
            if (ret >= mod) ret-=mod;
        }
    }
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    pre();
    cin >> n >> k;
    cout << go() << '\n';
    return 0;
}
