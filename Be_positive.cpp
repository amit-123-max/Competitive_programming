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

        int cntNeg = 0, cntZero = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) cntNeg++;
            else if (x == 0) cntZero++;
        }

        int operations = cntZero;
        if (cntNeg % 2 == 1) operations += 2;

        cout << operations << '\n';
    }
    return 0;
}
