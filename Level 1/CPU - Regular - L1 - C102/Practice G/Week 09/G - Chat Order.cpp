#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    stack<string>st;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        st.push(s);
    }
    map<string,bool>vis;
    while(!st.empty())
    {
        string x=st.top();
        st.pop();
        if(vis.count(x))
        {
            continue;
        }
        else
        {
            vis[x]=1;
            cout<<x<<'\n';
        }
    }
    return 0;
}
