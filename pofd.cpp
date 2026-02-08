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
        vector<int> prefDistinct(n);
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            if (++freq[a[i]] == 1) prefDistinct[i] = 1;
            if (i) prefDistinct[i] += prefDistinct[i - 1];
        }
        fill(freq.begin(), freq.end(), 0);
        int ans = 0;
        int end = n - 1;
        int curDistinct = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (++freq[a[i]] == 1) ++curDistinct;
            if (curDistinct == prefDistinct[end]) {
                ++ans;
                for (int j = i; j <= end; ++j) freq[a[j]] = 0;
                end = i - 1;
                curDistinct = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}