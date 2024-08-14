#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        vector<int>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        vector<int>f(n);
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        if(s==f)
        {
            cout<<"YES\n";
        }
        else
        {
            int l=-1,r=-1;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=f[i])
                {
                    r=i;
                    if(l==-1)
                    {
                        l=i;
                    }
                }
            }
            if(s[l]>f[l])
            {
                cout<<"NO\n";
            }
            else
            {
                int dif=f[l]-s[l];
                for(int i=l;i<=r;i++)
                {
                    s[i]+=dif;
                }
                if(s==f)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}
