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
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            int x=s[i],y=s[i+1];
            if(x>y) swap(x,y);
            while(x*2<y)
            {
                ans++;
                x*=2;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
