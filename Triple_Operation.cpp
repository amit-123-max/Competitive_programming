#include <bits/stdc++.h>
using namespace std;
#define int long long

int three(int n){
    int ct = 0;
    while(n){
        ct++;
        n /= 3;
    }
    return ct;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int l,r;
	    cin>>l>>r;
	    int ans = 0;
        ans +=  2*three(l);
        l++;
        while(l <= r){
            int f = three(l);
            int pw = 1;
            for(int i = 0; i < f; i++) pw *= 3;
            int end = min(r, pw - 1); 
            ans += (end - l + 1) * f;
            l = end + 1;
        }
        cout << ans << endl;
	}

}