#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    queue<pair<int,int>>q;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        q.push({i,x});
    }
    while(q.size()>1)
    {
        auto[idx,val]=q.front();
        q.pop();
        val-=m;
        if(val>0)
        {
            q.push({idx,val});
        }
    }
    cout<<q.front().first;
    return 0;
}
