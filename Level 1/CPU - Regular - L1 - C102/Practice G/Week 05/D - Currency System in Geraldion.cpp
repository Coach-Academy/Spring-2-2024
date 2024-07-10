#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int mn=INT_MAX;
    while(n--)
    {
        int x;cin>>x;
        mn=min(mn,x);
    }
    if(mn==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
