#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string a,b;cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(char c='a';c<='z';c++)
        {
            if(binary_search(a.begin(),a.end(),c)&&binary_search(b.begin(),b.end(),c))
            {
                cout<<"YES\n";
                goto done;
            }
        }
        cout<<"NO\n";
        done:{};
    }
    return 0;
}
