#include<bits/stdc++.h>
using namespace std;
#define ll long long
int rev(int x)
{
    int ret=0;
    while(x)
    {
        ret*=10;
        ret+=x%10;
        x/=10;
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int l,r,k;cin>>l>>r>>k;
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        int dif=abs(i-rev(i));
        if(dif%k==0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
