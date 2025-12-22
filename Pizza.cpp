#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        while(n >= 3){
            long long x = n / 3;
            ans += x;
            n -= 2 * x;
        }
        cout << ans << "\n";
    }
    return 0;
}
