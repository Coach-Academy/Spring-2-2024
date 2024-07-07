#include "bits/stdc++.h"
using namespace std;

#define cel(a,b) ((a+b-1)/b)
#define all(x) x.begin(),x.end()
#define itn int
#define ll long long int
#define tarokaz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>& operator+=(vector<int>& v, int x){
    v.emplace_back(x);
    return v;
}

vector<int>& operator--(vector<int>&v){
    v.pop_back();
    return v;
}

ostream& operator<<(ostream& o, vector<int>& v){
    int len = v.size();
    for (int i = 0; i < len; ++i) {
        o<<v[i]<<" ";
    }
    return o;
}

int n;
const int k = 3;
int a[200005];

bool val(double x){
    double idx = (double)a[0] + x;
    int c = 0;
    for (int i = 1; i < n; ++i) {
        if(c>k)
            return 0;
        if(idx + x <= a[i]){
            c++;
            idx = a[i] + x;
        }
    }
    c++;
    return (c<=k);
}

int main()
{
    tarokaz
    int tc = 1;
//    cin >> tc;
    while(tc--){
        cin>>n;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        double l = 0.5, r = 1e9;
        if(mp.size()<=3){
            cout<<0<<endl;
            cout<<fixed<<setprecision(6);
            int c = 0;
            for (int i = 0; i < n; ++i) {
                if(i){
                    if(a[i] == a[i - 1])
                        continue;
                }
                c++;
                cout<<(double)a[i]<<" ";
            }
            while(c<3){
                cout<<(double)a[n - 1]<<" ";
                c++;
            }
            cout<<endl;
        }
        else {
int cnt = 150;
            while (cnt--) {
                double mid = l + (r - l) / 2;
                if (val(mid))
                    r = mid;
                else
                    l = mid  ;
            }
            cout<<fixed<<setprecision(6);
            cout<<r<<endl;
            double idx = (double)a[0] + r;
            cout<<fixed<<setprecision(6);
            for (int i = 1; i < n; ++i) {
                if(idx + r <= a[i]){
                    cout<<idx<<" ";
                    idx = a[i] + r;
                }
            }
            cout<<idx<<endl;
        }
    }
    return 0;
}
