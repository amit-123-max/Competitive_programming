#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// integer floor(sqrt(x)) robustly
ll isqrt_ll(ll x) {
    ll r = (ll)floor(sqrt((long double)x));
    while ((r+1) * (r+1) <= x) ++r;
    while (r * r > x) --r;
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        ll n; cin >> n;
        ll val = 2 * n - 1;           // fits in 64-bit
        ll m = isqrt_ll(val);         // floor(sqrt(2n-1))
        ll ans = 0;
        if (m >= 3) ans = (m - 1) / 2; // number of odd a >=3 and <= m
        cout << ans << '\n';
    }
    return 0;
}
