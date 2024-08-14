#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll h,n;cin>>h>>n;
    pair<ll,ll>s[n];
    for(auto&[a,b]:s)
    {
        cin>>a>>b;
    }
    sort(s,s+n);
    for(auto[a,b]:s)
    {
        if(h<=a)
        {
            cout<<"NO";
            return 0;
        }
        h+=b;
    }
    cout<<"YES";
    return 0;
}
