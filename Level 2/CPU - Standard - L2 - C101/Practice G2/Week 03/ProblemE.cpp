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
    string s;
    cin >> s;
    int n = s.size();
    int pre[n+1]={};
    for (int i = 1 ; i < n ; i++){
        pre[i] = (s[i]==s[i-1]);
        pre[i]+=pre[i-1];
    }
    int q;
    cin >> q;
    while (q--){
        int l , r ;
        cin >> l >> r;
        cout << pre[r-1] - pre[l-1] << el;
    }
    return 0;
}
