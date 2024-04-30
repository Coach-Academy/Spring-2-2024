#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k;cin>>n>>k;
    ll odd=(n+1)/2;
    if(k<=odd)
    {
        cout<<2*k-1;
    }
    else
    {
        cout<<2*(k-odd);
    }
    return 0;
}
