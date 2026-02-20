#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    long long l, r;
    long long x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) cin >> c[i];

    long long ways = 0;
    int total = 1 << n;
    for (int mask = 0; mask < total; ++mask) {
        int cnt = 0;
        long long sum = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n; ++i) if (mask & (1 << i)) {
            ++cnt;
            sum += c[i];
            if (c[i] < mn) mn = c[i];
            if (c[i] > mx) mx = c[i];
        }
        if (cnt < 2) continue;
        if (sum < l || sum > r) continue;
        if ((long long)mx - (long long)mn < x) continue;
        ++ways;
    }

    cout << ways << '\n';
}