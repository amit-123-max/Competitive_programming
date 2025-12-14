#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(const vector<int>& a, int k) {
    int n = a.size();
    int extra = 0;

    for (int i = 0; i < n; ) {
        if (i + 1 < n && a[i + 1] - a[i] <= k) {
            i += 2;
        } else {
            extra++;
            i++;
        }
        if (extra > 1) return false;
    }
    return true;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int lo = 1, hi = 1e18, ans = hi;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (check(a, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans <<endl;
    }
}
