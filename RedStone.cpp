#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        bool ok = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] >= 2) {
                ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
