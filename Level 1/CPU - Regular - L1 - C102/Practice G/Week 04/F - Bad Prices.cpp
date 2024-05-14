#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans=0,mn=1e9;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]>mn)
            {
                ans++;
            }
            else
            {
                mn=s[i];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
