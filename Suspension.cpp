#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n; cin >> n;
        int y, r; cin >> y >> r;
        int by_red = min(r, n);
        int remain = n - by_red;
        int by_yellow = min(y / 2, remain);
        cout << by_red + by_yellow << '\n';
    }
    return 0;
}
