#include <iostream>
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
ll mod = 1e9+7;
#define el '\n';
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> OS; // find_by_order, order_of_key
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll NegMod (ll a, ll n){ return ((a%n)+n)%n;}
//Same Bits till one differs put the remaining as one

map<ll,ll> M;
vector<long long> Prime_Factorize(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            M[d]++;
            n /= d;
        }
    }
    if (n > 1)
    {
        M[n]++;
    }
    return factorization;
}

void solve()
{



}



int main()
{
    FIO
    int tc;
    //tc=1;
    //cin>>tc
    ll n;
    while(cin >> n and (n != 0)) {
        Prime_Factorize(n);
        for (auto i: M) {
            cout<< i.first << "^" << i.second << " ";
        }
        cout<<el;
        M.clear();
    }
    return 0;
}