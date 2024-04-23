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
    int a[n], b[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];
    int ans = 0;
    for (int i=0;i<n;i++){
        ans+= (a[i] * b[i]);
    }
    if (ans == 0)
        cout << "Yes";
    else cout << "No";

    return 0;
}
