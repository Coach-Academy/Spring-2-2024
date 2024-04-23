#include <bits/stdc++.h>
using namespace std;
void fast ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int solve (int numCrates , int loadSize){
    if (numCrates <= loadSize) // base case
        return 1;
    if (numCrates % 2 == 0)
        return solve (numCrates / 2 , loadSize) * 2;
    else {
        return solve (numCrates/2 , loadSize ) + solve (numCrates/2 + 1 , loadSize);
    }
}
int main()
{

    fast();
    int numCrates , loadSize;
   while(cin >> numCrates >> loadSize){
    cout << solve (numCrates , loadSize) << "\n";
   }
    return 0;
}
