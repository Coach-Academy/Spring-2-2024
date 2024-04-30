#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,c;cin>>a>>b>>c;
    string fst="Takahashi",sec="Aoki";
    if(c==1)
    {
        swap(a,b);
        fst="Aoki";
        sec="Takahashi";
    }
    if(a>b)
    {
        cout<<fst;
    }
    else
    {
        cout<<sec;
    }
    return 0;
}
