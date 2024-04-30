#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll x=0,w=n;
    int dig=w%10;
    w/=10;
    x=x*10+dig;
    dig=w%10;
    w/=10;
    x=x*10+dig;
    dig=w%10;
    w/=10;
    x=x*10+dig;
    if(x==n)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
