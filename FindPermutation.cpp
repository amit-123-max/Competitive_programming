#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> g(n);
        for(int i = 0; i < n; ++i) cin >> g[i];
        vector<int> vals(n);
        for(int i = 0; i < n; ++i) vals[i] = i + 1;
        sort(vals.begin(), vals.end(), [&](int a, int b) {
            if (a == b) return false;
            if (a < b) return g[a-1][b-1] == '1';
            else return g[b-1][a-1] == '0';
        });
        for(int i = 0; i < n; ++i) {
            if(i) cout << ' ';
            cout << vals[i];
        }
        cout << '\n';
    }
}