#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n],mx=-1e9,mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<mn) mn=a[i];
        if(a[i]>mx) mx=a[i];
    }
    int idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mx)
        {
            idx=i;
            break;
        }
    }
    int idx2=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==mn)
        {
            idx2=i;
            break;
        }
    }
    cout<<idx+n-idx2-1-(idx2<idx)<<'\n';
    return 0;
}
