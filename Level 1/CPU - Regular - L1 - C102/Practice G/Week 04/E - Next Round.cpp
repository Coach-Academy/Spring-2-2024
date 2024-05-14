#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    int s[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i]>0&&s[i]>=s[k])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
