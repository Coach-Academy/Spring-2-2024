#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll cur=0,mx=0;
    for(int i=0;i<n;i++)
    {
        ll a,b;cin>>a>>b;
        cur-=a;
        cur+=b;
        mx=max(mx,cur);
    }
    cout<<mx;
    return 0;
}
