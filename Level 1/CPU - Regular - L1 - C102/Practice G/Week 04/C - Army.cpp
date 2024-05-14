#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n+1]={};
    for(int i=1;i<n;i++)
    {
        cin>>s[i];
    }
    int a,b;cin>>a>>b;
    int ans=0;
    for(int i=a;i<b;i++)
    {
        ans+=s[i];
    }
    cout<<ans;
    return 0;
}
