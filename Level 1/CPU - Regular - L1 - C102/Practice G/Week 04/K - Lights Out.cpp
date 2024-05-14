#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s[5][5]={};
    for(int i=1;i<=3;i++)
    {
        for(int o=1;o<=3;o++)
        {
            cin>>s[i][o];
        }
    }
    for(int i=1;i<=3;i++)
    {
        for(int o=1;o<=3;o++)
        {
            int toggle=s[i][o]+s[i-1][o]+s[i+1][o]+s[i][o-1]+s[i][o+1];
            if(toggle%2==0)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<'\n';
    }
    return 0;
}
