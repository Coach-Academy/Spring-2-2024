#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int b,n,m;cin>>b>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        for(auto it:arr)
        {
            if(it+x<=b)
            {
                ans=max(ans,it+x);
            }
        }
    }
    cout<<ans;
    return 0;
}
