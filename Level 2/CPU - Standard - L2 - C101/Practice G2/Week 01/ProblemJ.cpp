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
    sort(s.begin(), s.end());
    for (int i=0; i < s.size() ; i++)
    {
        if (s[i]=='+')
            continue;
        cout << s[i] ;
        if (i != s.size()-1)
            cout << "+";
    }

    return 0;
}
