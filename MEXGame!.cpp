#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1), pos(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            pos[a[i]] = i; // store original 1-based index
        }
        bool ok = true;
        for (int v = 1; v <= n-1; ++v) {
            if ((pos[v] % 2) == (pos[v+1] % 2)) { ok = false; break; }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
