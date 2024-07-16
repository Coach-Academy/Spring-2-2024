#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;cin>>n>>d;
    deque<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    while(d--)
    {
        s.push_back(s.front());
        s.pop_front();
    }
    for(auto it:s)
    {
        cout<<it<<' ';
    }
    return 0;
}
