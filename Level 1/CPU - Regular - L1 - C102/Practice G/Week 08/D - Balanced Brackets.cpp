#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        string s;cin>>s;
        stack<char>st;
        for(auto it:s)
        {
            if(it=='('||it=='{'||it=='[')
            {
                st.push(it);
            }
            else
            {
                if(it==')'&&st.size()&&st.top()=='(')
                {
                    st.pop();
                }
                else if(it=='}'&&st.size()&&st.top()=='{')
                {
                    st.pop();
                }
                else if(it==']'&&st.size()&&st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    cout<<"NO\n";
                    goto done;
                }
            }
        }
        if(st.empty())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        done:{};
    }
    return 0;
}
