#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans++;
        int o=i+1;
        while(o<n&&s[o]==s[i])
        {
            o++;
        }
        i=o-1;
    }
    cout<<ans;
    return 0;
}
