#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(vector<int>&v)
{
    cout<<v.size()<<' ';
    for(auto it:v) cout<<it<<' ';
    cout<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<int>pos,neg,z;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x==0) z.push_back(x);
        else if(x>0) pos.push_back(x);
        else neg.push_back(x);
    }
    if(pos.empty())
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
        z.push_back(neg.back());
        neg.pop_back();
    }
    print(neg);
    print(pos);
    print(z);
    return 0;
}
