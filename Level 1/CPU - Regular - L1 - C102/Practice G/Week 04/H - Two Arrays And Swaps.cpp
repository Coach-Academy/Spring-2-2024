#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        while(k--)
        {
            int mn=1e9,idx=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]<mn)
                {
                    mn=a[i];
                    idx=i;
                }
            }
            int mx=-1e9,idx2=0;
            for(int i=0;i<n;i++)
            {
                if(b[i]>mx)
                {
                    mx=b[i];
                    idx2=i;
                }
            }
            if(mx>mn)
            {
                swap(a[idx],b[idx2]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}
