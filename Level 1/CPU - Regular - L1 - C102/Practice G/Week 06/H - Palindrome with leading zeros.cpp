#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool pal(int n)
{
    string s=to_string(n);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return 0;
        }
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    while(n>0&&n%10==0) n/=10;
    if(pal(n)) cout<<"Yes";
    else cout<<"No";
    return 0;
}
