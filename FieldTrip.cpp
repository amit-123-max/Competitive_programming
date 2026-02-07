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
        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        int half = n / 2;
        for (int i = half - 1; i >= 1; --i) {
            if (a[i] == a[i+1] || a[n-i+1] == a[n-i]) swap(a[i], a[n-i+1]);
        }
        int ans = 0;
        for (int i = 1; i < n; ++i) if (a[i] == a[i+1]) ++ans;
        cout << ans << '\n';
    }
    return 0;
}
