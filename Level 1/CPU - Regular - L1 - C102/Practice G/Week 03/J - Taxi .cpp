#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int one=0,two=0,three=0,four=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x==1) one++;
        if(x==2) two++;
        if(x==3) three++;
        if(x==4) four++;
    }
    int ans=four;
    // 3 & 1
    int mn=min(three,one);
    ans+=mn;
    one-=mn;
    three-=mn;
    ans+=three;
    ans+=two/2;
    two%=2;
    // 2 1 1
    ans+=one/4;
    one%=4;
    mn=min(two,one/2);
    one-=mn*2;
    two-=mn;
    ans+=mn;
    ans+=(two+one+3)/4;
    cout<<ans;
    return 0;
}
