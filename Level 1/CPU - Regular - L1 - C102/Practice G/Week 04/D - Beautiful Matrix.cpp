#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    for(int i=0;i<5;i++)
    {
        for(int o=0;o<5;o++)
        {
            bool x;cin>>x;
            if(x)
            {
                a=i;
                b=o;
            }
        }
    }
    cout<<abs(a-2)+abs(b-2);
    return 0;
}
