#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x=0;
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;
        if(s=="++X"||s=="X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x;
    return 0;
}
