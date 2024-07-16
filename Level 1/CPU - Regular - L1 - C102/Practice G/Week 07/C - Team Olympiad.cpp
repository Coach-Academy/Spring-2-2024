#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<int>a,b,c;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        if(x==1) a.push_back(i);
        if(x==2) b.push_back(i);
        if(x==3) c.push_back(i);
    }
    int sz=min({a.size(),b.size(),c.size()});
    cout<<sz<<'\n';
    for(int i=0;i<sz;i++)
    {
        cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<'\n';
    }
    return 0;
}
