#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,a; cin>>n>>m>>a;
    ll l,w;
    l=(n+a-1)/a;
    w=(m+a-1)/a;
    cout<<l*w;
    return 0;
}
