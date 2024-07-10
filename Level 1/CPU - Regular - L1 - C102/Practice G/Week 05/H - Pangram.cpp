#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    for(auto&it:s)
    {
        it=tolower(it);
    }
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s.size()==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
