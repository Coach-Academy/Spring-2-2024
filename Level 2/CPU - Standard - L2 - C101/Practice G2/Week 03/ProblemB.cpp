#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '/n'
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int N = 1e5+1;
int main()
{
    fast();
    int n , d;
    cin >> n >> d;
    ll fre[N]={};
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        fre[x]++;
    }
    ll ans = 0;
    for (int i=0;i<N;i++){
        ans+= fre[i] * fre[i+d] * fre[i+(2*d)];
    }
    cout << ans ;
    return 0;
}
