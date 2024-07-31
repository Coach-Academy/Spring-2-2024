#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    queue<int>q;
    int t;cin>>t;while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int n;cin>>n;
            q.push(n);
        }
        else if(op==2)
        {
            if(!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if(q.empty())
            {
                cout<<"Empty!\n";
            }
            else
            {
                cout<<q.front()<<'\n';
            }
        }
    }
    return 0;
}
