#include<bits/stdc++.h>
using namespace std;
#define ll long long
string am(string s)
{
    string h={s[0],s[1]};
    if(h=="12")
    {
        s[0]='0';
        s[1]='0';
    }
    s.pop_back();
    s.pop_back();
    return s;
}
string pm(string s)
{
    string h={s[0],s[1]};
    int hours=stoi(h);
    if(h!="12")
    {
        hours+=12;
        string x=to_string(hours);
        s[0]=x[0];
        s[1]=x[1];
    }
    s.pop_back();
    s.pop_back();
    return s;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    if(s[s.size()-2]=='A')
    {
        cout<<am(s);
    }
    else
    {
        cout<<pm(s);
    }
    return 0;
}
