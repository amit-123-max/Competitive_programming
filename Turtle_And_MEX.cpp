#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
    while (T--) {
        int n;
        long long m;
        cin >> n >> m;
        int64 best_m = 0, best_next = 0;
        for (int i = 0; i < n; ++i) {
            int l; cin >> l;
            vector<int> a(l);
            for (int j = 0; j < l; ++j) cin >> a[j];
            int cap = l + 2;
            vector<char> seen(cap, 0);
            for (int v : a) if (v < cap) seen[v] = 1;
            int mex = 0;
            while (mex < cap && seen[mex]) ++mex;
            best_m = max<int64>(best_m, mex);
            if (mex < cap) seen[mex] = 1;
            int mex2 = 0;
            while (mex2 < cap && seen[mex2]) ++mex2;
            best_next = max<int64>(best_next, mex2);
        }
        int64 R = max(best_m, best_next);
        __int128 ans = 0;
        if (m <= R) {
            ans = (__int128)(m + 1) * R;
        } else {
            ans = (__int128)(R + 1) * R;
            auto sumTo = [&](__int128 x)->__int128 { return x * (x + 1) / 2; };
            ans += sumTo(m) - sumTo(R);
        }
        long long out = (long long) ans;
        cout << out << '\n';
    }
    return 0;
}
