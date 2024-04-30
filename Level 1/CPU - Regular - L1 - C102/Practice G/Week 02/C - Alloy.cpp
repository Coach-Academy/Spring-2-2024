#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;cin>>a>>b;
    if(b==0)
    {
        cout<<"Gold";
    }
    else if(a==0)
    {
        cout<<"Silver";
    }
    else
    {
        cout<<"Alloy";
    }
    return 0;
}
