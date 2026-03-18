#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, c, d;
        cin >> n >> c >> d;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        long long ans = (n - 1) * c;

        for (int i = 0; i < (int)a.size(); i++) {
            long long k = a[i];
            long long have = i + 1;

            long long cost = (n - have) * c + (k - have) * d;
            ans = min(ans, cost);
        }

        cout << ans << '\n';
    }
}