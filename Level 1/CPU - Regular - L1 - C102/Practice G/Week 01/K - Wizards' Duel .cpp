#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double l, p, q;
    cin >> l >> p >> q;
    double time = l / (p + q);
    double distance = p * time;
    cout << distance << endl;
    return 0;

}
