#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    map<int,int>s;
    map<int,int>b;
    for(int i=0;i<n;i++)
    {
        char op;cin>>op;
        if(op=='S')
        {
            int price,value;cin>>price>>value;
            s[price]+=value;
        }
        else
        {
            int price,value;cin>>price>>value;
            b[price]+=value;
        }
    }
    int c=k;
    vector<pair<int,int>>v;
    for(auto it=s.begin();c>0&&it!=s.end();it++,c--)
    {
        v.push_back({it->first,it->second});
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<"S "<<v[i].first<<' '<<v[i].second<<'\n';
    }
    c=k;
    for(auto it=b.rbegin();c>0&&it!=b.rend();it++,c--)
    {
        cout<<"B "<<it->first<<' '<<it->second<<'\n';
    }
    return 0;
}
