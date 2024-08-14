#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s.erase(s.begin()+i);
            cout<<s;
            return 0;
        }
    }
    s.pop_back();
    cout<<s;
    return 0;
}
