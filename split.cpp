#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n;
        cin >> n;
        int total = 2 * n;
        vector<int> freq(total + 1, 0);
        for(int i = 0; i < total; ++i) {
            int x; cin >> x;
            ++freq[x];
        }
        int oddCnt = 0, evenCnt = 0;
        for(int v = 1; v <= total; ++v) if(freq[v] > 0) {
            if(freq[v] & 1) ++oddCnt;
            else ++evenCnt;
        }
        int bestK = 0;
        int maxK = min(evenCnt, n);
        for(int k = maxK; k >= 0; --k) {
            int remain = n - k;
            if(remain < 0) continue;
            int L = max(0, oddCnt - remain);
            int R = min(oddCnt, remain);
            if(L > R) continue;
            int targetParity = (remain) & 1;
            int first = L;
            if((first & 1) != targetParity) ++first;
            if(first <= R) { bestK = k; break; }
        }
        cout << (oddCnt + 2 * bestK) << '\n';
    }
    return 0;
}
