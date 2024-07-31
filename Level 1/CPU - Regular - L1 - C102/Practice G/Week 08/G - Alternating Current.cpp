#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    stack<char>st;
    for(auto it:s)
    {
        if(st.empty()||st.top()!=it)
        {
            st.push(it);
        }
        else
        {
            st.pop();
        }
    }
    if(st.empty())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
