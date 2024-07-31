#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    priority_queue<ll>pq;
    ll sum=0,ans=0;
    while(n--)
    {
        ll x;cin>>x;
        sum+=x;
        ans++;
        if(x<0)
        {
            pq.push(-x);
        }
        while(pq.size()&&sum<0)
        {
            sum+=pq.top();
            ans--;
            pq.pop();
        }
    }
    cout<<ans;
    return 0;
}
