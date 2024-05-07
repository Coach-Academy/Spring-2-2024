#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int o=0;o<5;o++)
        {
            bool b;cin>>b;
            if(b==1)
            {
                x=i;
                y=o;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
    return 0;
}
