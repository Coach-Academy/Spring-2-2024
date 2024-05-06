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
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int fre[N]={0};
        bool ok = 1;
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            fre[x]++;
            if (fre[x]>1)
                ok = false;
        }
        if (ok)
            cout << "prekrasnyy\n";
        else cout << "ne krasivo\n";
    }
    return 0;
}
