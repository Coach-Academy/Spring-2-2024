#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    if(s=="RRR") cout<<3;
    else if(s=="RRS"||s=="SRR") cout<<2;
    else if(s=="SSS") cout<<0;
    else cout<<1;
    return 0;
}
