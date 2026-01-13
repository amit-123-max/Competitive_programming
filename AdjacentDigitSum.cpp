#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x + 1 >= y && (x + 1 - y) % 9 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
