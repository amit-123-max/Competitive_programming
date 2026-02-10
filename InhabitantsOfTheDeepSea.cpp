#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int64> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        vector<int64> ps(n+1, 0);
        for(int i = 0; i < n; ++i) ps[i+1] = ps[i] + a[i];

        int64 L = (k + 1) / 2;
        int64 R = k / 2;

        auto itL = upper_bound(ps.begin(), ps.end(), L);
        int p = int(itL - ps.begin() - 1);

        int64 total = ps[n];
        int64 target = total - R;
        if(target <= 0) {
            cout << n << '\n';
            continue;
        }
        auto itR = lower_bound(ps.begin(), ps.end(), target);
        int idx = int(itR - ps.begin());
        int s = n - idx;

        if(p + s >= n) {
            cout << n << '\n';
            continue;
        }

        int l = p;
        int r = n - 1 - s;
        if(l == r) {
            int64 remL = L - ps[p];
            int64 remR = R - (ps[n] - ps[n - s]);
            if(remL + remR >= a[l]) cout << (p + s + 1) << '\n';
            else cout << (p + s) << '\n';
        } else {
            cout << (p + s) << '\n';
        }
    }
    return 0;
}
