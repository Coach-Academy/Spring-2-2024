#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int p,q;cin>>p>>q;
        int free=q-p;
        if(free>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
