#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> s;
vector<int> dp;

int dfs(int i){
    if(dp[i] != -1) return dp[i];
    int best = 1;
    for(int d = 1; (long long)d * d <= i; ++d){
        if(i % d != 0) continue;
        int j1 = d;
        int j2 = i / d;
        if(j1 < i && s[j1] < s[i]) best = max(best, 1 + dfs(j1));
        if(j2 != j1 && j2 < i && s[j2] < s[i]) best = max(best, 1 + dfs(j2));
    }
    dp[i] = best;
    return dp[i];
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        cin >> n;
        s.assign(n+1, 0);
        for(int i = 1; i <= n; ++i) cin >> s[i];
        dp.assign(n+1, -1);
        int ans = 0;
        for(int i = 1; i <= n; ++i) ans = max(ans, dfs(i));
        cout << ans << '\n';
    }
    return 0;
}
