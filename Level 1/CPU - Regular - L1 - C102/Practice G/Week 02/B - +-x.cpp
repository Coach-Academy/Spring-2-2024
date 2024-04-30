#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;cin>>a>>b;
    int x=a+b,y=a-b,z=a*b;
    int mx1;
    if(x>y)
    {
        mx1=x;
    }
    else
    {
        mx1=y;
    }
    if(z>mx1)
    {
        cout<<z;
    }
    else
    {
        cout<<mx1;
    }
    return 0;
}
