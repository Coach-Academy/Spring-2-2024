#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    if(set(s.begin(),s.end()).size()==1)
    {
        cout<<"Won";
    }
    else
    {
        cout<<"Lost";
    }
    return 0;
}
