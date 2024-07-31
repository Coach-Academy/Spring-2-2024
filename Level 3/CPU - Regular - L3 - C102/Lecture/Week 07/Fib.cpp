#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n < 2) return n; // base case
    return fib(n-1)+fib(n-2); // fib(n) = fib(n-1)+fib(n-2) transition, recurrence relation
} // 1.635^n ~ 2^n

int dp[202]; // dp[n] = -1 iff the value of fib(n) is not calculated yet
int fibDp(int n) {
    if (n < 2) return n; // base case
    auto &ret = dp[n];
    if (~ret) return ret;
    return ret = fibDp(n-1)+fibDp(n-2); // fib(n) = fib(n-1)+fib(n-2) transition, recurrence relation
} // O(n)

int main() {
    memset(dp, -1, sizeof dp);
    cout << fibDp(6) << '\n'; // 0 1 1 2 3 5 8...
    return 0;
}
