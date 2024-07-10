#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k,x;cin>>n>>k>>x;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll v;cin>>v;
        if(i<n-k) ans+=v;
        else ans+=x;
    }
    cout<<ans;
    return 0;
}
