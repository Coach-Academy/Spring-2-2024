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
    int t;
    cin >> t;
    while (t--){
        int n , m;
        cin >> n >> m;
        set<int>st;
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        for (int i=0;i<m;i++){
            int x;
            cin >> x;
            st.insert(x);
        }

        int total = n+m;
        total -=st.size();
        cout << total << el;


    }

    return 0;
}
