#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x;cin>>x;
    if(x>=90)
    {
        cout<<"expert";
    }
    else
    {
        if(x>=0&&x<40)
        {
            cout<<40-x;
        }
        else if(x>=40&&x<70)
        {
            cout<<70-x;
        }
        else
        {
            cout<<90-x;
        }
    }
    return 0;
}
