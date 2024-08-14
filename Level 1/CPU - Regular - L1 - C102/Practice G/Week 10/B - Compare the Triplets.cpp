#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[3],b[3];
    for(int i=0;i<3;i++) cin>>a[i];
    for(int i=0;i<3;i++) cin>>b[i];
    int al=0,bo=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i]) al++;
        else if(b[i]>a[i]) bo++;
    }
    cout<<al<<' '<<bo;
    return 0;
}
