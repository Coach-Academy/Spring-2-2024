#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
