#include <bits/stdc++.h>
using namespace std;
#define el '\n'
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

}
int main()
{
    fast();
    int q;
    cin >> q;
    string s;
    stack<string>state;
    while (q--)
    {
        int op;
        cin >> op;
        if (op==1)
        {
            string w;
            cin >> w;
            state.push(s);
            s+=w;
        }
        else if (op==2)
        {
            int k;
            cin >> k;
            state.push(s);
            s = s.substr(0 ,s.size()-k);
        }
        else if (op==3){
            int k;
            cin >> k;
            cout << s[k-1] << "\n";
        }
        else {
            s = state.top();
            state.pop();
        }
    }
    return 0;
}
