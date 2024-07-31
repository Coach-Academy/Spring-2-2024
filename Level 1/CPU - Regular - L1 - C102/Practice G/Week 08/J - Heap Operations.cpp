#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<string>ans;
    int t;cin>>t;while(t--)
    {
        string op;cin>>op;
        if(op=="insert")
        {
            int x;cin>>x;
            pq.push(x);
            ans.push_back(op+' '+to_string(x));
        }
        else if(op=="getMin")
        {
            int x;cin>>x;
            while(pq.size()&&pq.top()<x)
            {
                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty()||pq.top()>x)
            {
                ans.push_back("insert "+to_string(x));
                pq.push(x);
            }
            ans.push_back(op+' '+to_string(x));
        }
        else
        {
            if(pq.empty())
            {
                ans.push_back("insert 0");
            }
            else
            {
                pq.pop();
            }
            ans.push_back(op);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<'\n';
    }
    return 0;
}
