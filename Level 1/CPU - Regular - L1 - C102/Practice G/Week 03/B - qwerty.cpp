#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<26;i++)
    {
        int x;cin>>x;
        cout<<char(x+'a'-1);
    }
    return 0;
}
