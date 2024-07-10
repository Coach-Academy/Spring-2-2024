#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool eq(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    int p[n];
    iota(p,p+n,1);
    int a,b,c=0;
    do{
        c++;
        if(eq(s,p,n))
        {
            a=c;
        }
        if(eq(f,p,n))
        {
            b=c;
        }
    }while(next_permutation(p,p+n));
    cout<<abs(a-b);
    return 0;
}
