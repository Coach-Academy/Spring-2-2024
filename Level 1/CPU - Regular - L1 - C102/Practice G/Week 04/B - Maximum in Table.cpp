#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n+1][n+1]={};
    for(int i=1;i<=n;i++)
    {
        s[1][i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int o=1;o<=n;o++)
        {
            s[i][o]=s[i-1][o]+s[i][o-1];
        }
    }
    cout<<s[n][n];
    return 0;
}
