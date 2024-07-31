#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    deque<int>d(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    while(k--)
    {
        int front=d.front();
        d.pop_front();
        d.push_back(front);
    }
    for(auto it:d)
    {
        cout<<it<<' ';
    }
    return 0;
}
