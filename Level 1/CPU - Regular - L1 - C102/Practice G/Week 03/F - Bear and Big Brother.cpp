#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;cin>>a>>b;
    int ans=0;
    while(a<=b)
    {
        ans++;
        a*=3;
        b*=2;
    }
    cout<<ans;
    return 0;
}
