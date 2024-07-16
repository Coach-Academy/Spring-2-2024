#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    deque<vector<int>>d(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        d[i]={x,i+1};
    }
    int ans=1;
    while(d.size())
    {
        int x=d.front()[0]-m,y=d.front()[1];
        ans=y;
        d.pop_front();
        if(x>0)
        {
            d.push_back({x,y});
        }
    }
    cout<<ans;
    return 0;
}
