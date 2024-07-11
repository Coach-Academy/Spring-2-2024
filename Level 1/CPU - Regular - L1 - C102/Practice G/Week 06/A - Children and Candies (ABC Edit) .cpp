#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}
