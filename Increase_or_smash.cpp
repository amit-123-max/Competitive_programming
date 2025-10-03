#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool caught(ll dr, ll dc, ll t) {
    return dr <= t && dc <= t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll n, rK, cK, rD, cD;
        cin >> n >> rK >> cK >> rD >> cD;

        ll dr = abs(rK - rD);
        ll dc = abs(cK - cD);

        ll lo = 0, hi = 2*n, ans = -1;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (caught(dr, dc, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
