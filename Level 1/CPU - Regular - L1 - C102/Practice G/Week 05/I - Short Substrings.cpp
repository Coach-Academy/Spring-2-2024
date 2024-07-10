#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string s;cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size();++++i)
        {
            cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}
