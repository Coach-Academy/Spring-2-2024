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
    while (s.back()=='0')
          s.pop_back();
    string temp = s;
    reverse(temp.begin() , temp.end());

    if (s == temp)
        cout << "Yes";
    else cout << "No";

    return 0;
}
