#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define e "\n"
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

ll T = 0, track = 0;

void go() {
    ll n;
    string s;
    cin >> n >> s;
    track++;

    if (n == 2) {
        cout << (10 * (s[0] - '0') + (s[1] - '0')) << e;
        return;
    }

    bool is_z = false;
    for (char c : s) if (c == '0') is_z = true;

    if (!is_z) {
        ll ans = (ll)1e13;
        for (ll i = 0; i < n - 1; ++i) {
            ll tmp = (10 * (s[i] - '0') + (s[i + 1] - '0'));
            for (ll j = 0; j < n; ++j) {
                if (j == i || j == (i + 1)) continue;
                if (s[j] != '1') tmp += (s[j] - '0');
            }
            ans = min(ans, tmp);
        }
        cout << ans << e;
        return;
    }

    if (n == 3 && is_z) {
        if (!(s[0] == '0' || s[2] == '0')) {
            ll ans = (ll)1e10;
            if (s[2] == '1') {
                ans = (s[0] - '0');
            } else if (s[0] == '1') {
                ans = (s[2] - '0');
            } else {
                ans = ((s[0] - '0') + (s[2] - '0'));
            }
            cout << ans << e;
        } else {
            cout << 0 << e;
        }
        return;
    }

    cout << 0 << e;
}

int main() {
    fast;
    ll t;
    cin >> t;
    T = t;
    while (t--) go();
    return 0;
}