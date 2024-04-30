#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double v,t,s,d;cin>>v>>t>>s>>d;
    double time=d/v;
    if(time>=t&&time<=s)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}
