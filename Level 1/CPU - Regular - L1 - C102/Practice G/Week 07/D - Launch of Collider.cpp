#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]=='R'&&s[i]=='L')
        {
            int mid=(a[i-1]+a[i])/2;
            ans=min(ans,mid-a[i-1]);
        }
    }
    if(ans==INT_MAX) ans=-1;
    cout<<ans;
    return 0;
}
