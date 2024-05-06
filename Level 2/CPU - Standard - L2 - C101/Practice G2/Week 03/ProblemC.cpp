#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int N = 1e5+2;
int main()
{
    fast();
    int n;
    cin >> n;
    int pre[N]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        pre[i] = x;
        pre[i]+=pre[i-1];
    }
    int q;
    cin >> q;
    while (q--){
        int l , r;
        cin >> l >> r;
        l++ , r++;
        cout << pre[r] - pre[l-1] << el;
    }
    return 0;
}
