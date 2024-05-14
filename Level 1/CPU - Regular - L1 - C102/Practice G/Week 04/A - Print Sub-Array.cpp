#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    int l,r;cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        cout<<s[i]<<' ';
    }
    return 0;
}
