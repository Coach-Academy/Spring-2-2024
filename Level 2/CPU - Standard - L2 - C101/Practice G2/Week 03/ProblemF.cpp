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
    map<int , int > fre , mp;
    while (t--){
        int ch , num ;
        cin >> ch >> num ;
        if (ch == 1){
            mp[fre[num]]--;
            fre[num]++;
            mp[fre[num]]++;
        }
        else if (ch == 2){
            if (!fre[num])
                continue;
            mp[fre[num]]--;
            fre[num]--;
            mp[fre[num]]++;
        }
        else {
            if (mp[num])
                cout << 1 << "\n";
            else cout << "0\n";
        }
    }
    return 0;
}
