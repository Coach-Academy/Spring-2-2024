#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;int test=0;
    while(cin>>n)
    {
        if(n==0) break;
        test++;
        ll s[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            sum+=s[i];
        }
        ll x=sum/n,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>x)
            {
                ans+=s[i]-x;
            }
        }
        cout<<"Set #"<<test<<'\n';
        cout<<"The minimum number of moves is "<<ans<<".\n\n";
    }
    return 0;
}
