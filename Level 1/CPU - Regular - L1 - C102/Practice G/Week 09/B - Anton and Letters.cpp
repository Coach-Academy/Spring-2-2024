#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    getline(cin,s);
    set<char>st;
    for(auto it:s)
    {
        if(isalpha(it))
        {
            st.insert(it);
        }
    }
    cout<<st.size();
    return 0;
}
