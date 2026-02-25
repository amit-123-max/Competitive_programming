#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    const int64 MASK = (1LL << 31) - 1;
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int64,int> cnt;
        cnt.reserve(n * 2);
        for(int i=0;i<n;++i){
            int64 a; cin >> a;
            ++cnt[a];
        }
        long long pairs = 0;
        for(auto &p : cnt){
            int64 v = p.first;
            int ccount = p.second;
            if(ccount == 0) continue; 
            int64 c = v ^ MASK;
            auto it = cnt.find(c);
            if(it != cnt.end()){
                if(c == v) {
                    continue;
                }
                int take = min(ccount, it->second);
                pairs += take;
                cnt[v] -= take;
                it->second -= take;
            }
        }
        cout << (n - pairs) << '\n';
    }
}