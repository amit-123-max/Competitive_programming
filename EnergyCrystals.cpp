#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        long long x;
        cin >> x;
        int b = 64 - __builtin_clzll(x);
        cout << (2 * b + 1) << '\n';
    }
    return 0;
}
