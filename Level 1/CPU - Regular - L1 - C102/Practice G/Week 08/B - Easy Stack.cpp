#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    stack<int>st;
    int t;cin>>t;while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            int n;cin>>n;
            st.push(n);
        }
        else if(op==2)
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            if(st.empty())
            {
                cout<<"Empty!\n";
            }
            else
            {
                cout<<st.top()<<'\n';
            }
        }
    }
    return 0;
}
