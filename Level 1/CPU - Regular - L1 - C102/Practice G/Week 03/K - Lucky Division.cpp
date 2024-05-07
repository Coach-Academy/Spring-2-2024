#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int d=i;
        bool lucky=1;
        while(d)
        {
            if(d%10!=7&&d%10!=4)
            {
                lucky=0;
            }
            d/=10;
        }
        if(lucky&&n%i==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
