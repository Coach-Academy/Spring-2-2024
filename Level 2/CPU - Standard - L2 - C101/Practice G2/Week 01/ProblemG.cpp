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
    bool even = true , odd = true;
    for (int i=0;i<s.size();i++){
        if (i%2==0){
            if (isupper(s[i]))
              even = false;
        }
        else {
            if (islower(s[i]))
                odd = false;
        }
    }

    if (odd == true && even == true)
        cout << "Yes";
    else cout << "No";
    return 0;
}
