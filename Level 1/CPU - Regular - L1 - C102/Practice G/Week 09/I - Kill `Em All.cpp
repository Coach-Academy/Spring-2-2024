#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,r;cin>>n>>r;
        set<ll>st;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            st.insert(x);
        }
        ll ans=0,c=0;
        while(st.size())
        {
            auto it=--st.end();
            ll x=*it-c*r;
            if(x>0)
            {
                ans++;
                c++;
            }
            st.erase(it);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
