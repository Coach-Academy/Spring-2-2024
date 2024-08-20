#include <iostream>

using namespace std;

int HPerfect(string &s) { // perfect hashing function
    int res = 0;
    int pw = 1; // 26^0
    int n = (int)s.size();
    for (int i = n-1; i >= 0; i--) {
        int d = s[i]-'a';
        res+=d*pw;
        pw*=26;
    }
    return res;
}

const int B1 = 107, mod1 = 1e9+7; // 1/mod
const int B2 = 101, mod2 = 998084347; // 1/mod
pair<int, int> H(string &s) {
    int h1 = 0, h2 = 0;
    int pw1 = 1; // B1^0
    int pw2 = 1; // B2^0
    int n = (int)s.size();
    for (int i = n-1; i >= 0; i--) {
        int d = s[i]-'a';
        h1+=1LL*d*pw1%mod1;
        h1%=mod1;
        h2+=1LL*d*pw2%mod2;
        h2%=mod2;
        pw1 = 1LL*B1*pw1%mod1;
        pw2 = 1LL*B2*pw2%mod2;
    }
    return {h1, h2};
}

const int B = 107, mod = 1e9+7;
int main() {
    string s, t; cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();

    auto getHash = [&](string s) {
        int h = 0;
        int pw = 1; // B^0
        int n = (int)s.size();
        for (int i = n-1; i >= 0; i--) {
            int d = s[i];
            h+=1LL*d*pw%mod;
            h%=mod;
            pw = 1LL*B*pw%mod;
        }
        return h;
    };

    int fullPw = 1;
    for (int i = 0; i < m; i++) {
        fullPw = 1LL*fullPw*B%mod;
    }
    // fullPw = B^m

    int hT = getHash(t);

    int h = getHash(s.substr(0, m));
    if (h == hT) cout << "0 ";
    for (int i = 1; i+m-1 < n; i++) {
        h = 1LL*B*h%mod;
        int leave = s[i-1];
        h-=1LL*leave*fullPw%mod;
        if (h < 0) h+=mod;
        h+=s[i+m-1];
        if (h >= mod) h-=mod;
        if (h == hT) cout << i << ' ';
    }
    cout << '\n';
    return 0;
}
