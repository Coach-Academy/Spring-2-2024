#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int N = 1e5+2;
int main()
{
    fast();
   int n;
   cin >> n ;
   ll a[n+1]={} , b[n+1]={};
   for (int i=1;i<=n;i++){
    cin >> a[i];
    b[i] = a[i];
    a[i]+=a[i-1];
   }
   sort (b+1 , b+n+1);
   for (int i=1;i<=n;i++)
    b[i]+=b[i-1];
   int q;
   cin >> q;
   while (q--){
    int ch , l , r;
    cin >>ch >> l >> r;
    if (ch==1)
        cout << a[r] - a[l-1] << "\n";
    else
      cout << b[r] - b[l-1] << "\n";

   }
    return 0;
}
