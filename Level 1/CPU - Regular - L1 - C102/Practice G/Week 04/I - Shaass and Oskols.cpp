#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int q;cin>>q;while(q--)
    {
        int x,y;cin>>x>>y;
        a[x-1]+=y-1;
        a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<'\n';
    }
    return 0;
}
