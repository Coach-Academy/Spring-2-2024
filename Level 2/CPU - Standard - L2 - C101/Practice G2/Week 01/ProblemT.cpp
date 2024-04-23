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
    string s;
    cin >> s;
    int idx = s.find('.') ;
    if (idx!= -1){
        s = s.substr(0 ,idx);
    }

    cout << s;

    return 0;
}
