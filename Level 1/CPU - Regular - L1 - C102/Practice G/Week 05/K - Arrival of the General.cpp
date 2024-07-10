#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n],mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        mn=min(mn,s[i]);
        mx=max(mx,s[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==mx)
        {
            for(int o=i-1;o>=0;o--)
            {
                ans++;
                swap(s[o],s[o+1]);
            }
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==mn)
        {
            for(int o=i+1;o<n;o++)
            {
                ans++;
                swap(s[o],s[o-1]);
            }
            break;
        }
    }
    cout<<ans;
    return 0;
}
