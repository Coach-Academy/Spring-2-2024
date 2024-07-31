#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s="";
    stack<pair<int,string>>st;
    int t;cin>>t;while(t--)
    {
        int op;cin>>op;
        if(op==1)
        {
            string x;cin>>x;
            s+=x;
            st.push({1,to_string(x.size())});
        }
        else if(op==2)
        {
            int k;cin>>k;
            string w="";
            while(k--)
            {
                w.push_back(s.back());
                s.pop_back();
            }
            reverse(w.begin(),w.end());
            st.push({2,w});
        }
        else if(op==3)
        {
            int k;cin>>k;
            cout<<s[k-1]<<'\n';
        }
        else
        {
            auto[op,x]=st.top();
            st.pop();
            if(op==1)
            {
                int k=stoi(x);
                while(k--)
                {
                    s.pop_back();
                }
            }
            else
            {
                s+=x;
            }
        }
    }
    return 0;
}
