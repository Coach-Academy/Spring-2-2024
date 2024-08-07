#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    queue<int>q;
    priority_queue<pair<int,int>>pq;
    int id=1;
    bool vis[t+1]={};
    while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int x;cin>>x;
            q.push(id);
            pq.push({x,-id});
            id++;
        }
        else if(op==2)
        {
            while(q.size()&&vis[q.front()])
            {
                q.pop();
            }
            vis[q.front()]=1;
            cout<<q.front()<<' ';
            q.pop();
        }
        else
        {
            while(pq.size()&&vis[-pq.top().second])
            {
                pq.pop();
            }
            auto[a,b]=pq.top();
            pq.pop();
            vis[-b]=1;
            cout<<-b<<' ';
        }
    }
    return 0;
}
