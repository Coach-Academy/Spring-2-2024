#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int ans=0;
    for(int row=1;row<=n;row++)
    {
        int c=row*(row+1)/2;
        if(n>=c)
        {
            ans++;
            n-=c;
        }
    }
    cout<<ans;
    return 0;
}
