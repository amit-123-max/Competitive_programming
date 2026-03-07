#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        const int MAXB = 30;
        vector<int> cnt(MAXB + 1, 0);

        for(int v : a) {
            for(int b = 0; b <= MAXB; b++) {
                if(v & (1 << b)) cnt[b]++;
            }
        }

        int g = 0;
        for(int b = 0; b <= MAXB; b++) {
            g = gcd(g, cnt[b]);
        }

        if(g == 0) {
            for(int k = 1; k <= n; k++) {
                if(k > 1) cout << " ";
                cout << k;
            }
            cout << "\n";
            continue;
        }

        vector<int> ans;

        for(int d = 1; d * d <= g; d++) {
            if(g % d == 0) {
                if(d <= n) ans.push_back(d);
                if(d * d != g && g / d <= n) ans.push_back(g / d);
            }
        }

        sort(ans.begin(), ans.end());

        for(int i = 0; i < ans.size(); i++) {
            if(i) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }
}