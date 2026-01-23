#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int64_t ans = 0;
        int max_so_far = a[0];
        for (int i = 1; i < n; ++i) {
            if (max_so_far > a[i]) ++ans;
            else if (a[i] > max_so_far) max_so_far = a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
