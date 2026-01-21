#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long R, X, D;
        int n;
        cin >> R >> X >> D >> n;
        string s;
        cin >> s;
        int ratedCount = 0;
        for (char c : s) {
            if (c == '1') {
                ++ratedCount;
                R = max(0LL, R - D);
            } else { // '2'
                if (R < X) {
                    ++ratedCount;
                    R = max(0LL, R - D);
                }
            }
        }
        cout << ratedCount << '\n';
    }
    return 0;
}
