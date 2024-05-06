#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '/n'
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int n ;
    cin >> n;
    int fre[101]={};
    int mx = 0;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        fre[x]++;
        mx = max (mx , fre[x]);
    }
    cout << n - mx ;
    return 0;
}
