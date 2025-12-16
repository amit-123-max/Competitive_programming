#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int bestGain = 0;
        int ansL = 1, ansR = 1;

        for (int l = 0; l < n; l++) {
            int cur = 0;
            for (int r = l + 1; r < n; r++) {
                if (a[r] < a[l]) cur++;
                else if (a[r] > a[l]) cur--;

                if (cur > bestGain) {
                    bestGain = cur;
                    ansL = l + 1;
                    ansR = r + 1;
                }
            }
        }

        cout << ansL << " " << ansR <<endl;
    }
    return 0;
}