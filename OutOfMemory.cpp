#include <bits/stdc++.h>
using namespace std;
#define int long long

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> orig(n + 1);
        for (int i = 1; i <= n; ++i) cin >> orig[i];

        vector<long long> add(n + 1, 0);
        vector<int> stamp(n + 1, 0);
        int version = 1;

        for (int i = 0; i < m; ++i) {
            int b;
            long long c;
            cin >> b >> c;

            if (stamp[b] != version) {
                stamp[b] = version;
                add[b] = 0;
            }

            add[b] += c;

            if (orig[b] + add[b] > h) {
                ++version;
            }
        }

        for (int i = 1; i <= n; ++i) {
            long long val = orig[i];
            if (stamp[i] == version) val += add[i];
            cout << val << (i == n ? '\n' : ' ');
        }
    }
}