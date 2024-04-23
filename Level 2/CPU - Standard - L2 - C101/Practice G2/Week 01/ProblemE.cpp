#include <bits/stdc++.h>
using namespace std;
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{

    fast();
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    long long x ;
    cin >> x;
    long long ans = (x / sum) * n;
    x%=sum;
    sum = 0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        ans++;
        if (sum > x)
            break;
    }

    cout << ans ;

    return 0;
}
