#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    map<string,int>vis;
    while(n--)
    {
        string s;cin>>s;
        if(!vis[s])
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<vis[s]<<'\n';
        }
        vis[s]++;
    }
    return 0;
}
