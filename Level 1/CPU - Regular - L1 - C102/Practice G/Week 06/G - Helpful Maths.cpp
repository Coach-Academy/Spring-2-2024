#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    string x="";
    for(int i=0;i<s.size();i+=2)
    {
        x.push_back(s[i]);
    }
    sort(x.begin(),x.end());
    for(int i=0,j=0;i<s.size();i+=2,j++)
    {
        s[i]=x[j];
    }
    cout<<s;
    return 0;
}
