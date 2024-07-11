#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string ans="YES";
    int top;cin>>top;
    while(n--)
    {
        int a,b;cin>>a>>b;
        if(a+b==7||a==top||b==top||a==7-top||b==7-top)
        {
            ans="NO";
        }
    }
    cout<<ans;
    return 0;
}
