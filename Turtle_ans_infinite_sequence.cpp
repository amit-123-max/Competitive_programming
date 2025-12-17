#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isSet(int n, int i) {
    return (n & (1 << i)) != 0;
}


int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int l = max(0ll,n-m);
	    int r = n+m;
	    int ans = 0;
	    int pre = 1;
	    int i = 0;
	    while(i<=32 && pre<=r){
	        if(abs(l-r)>=pre) ans += pre;
	        else if(isSet(l,i)) ans += pre;
	        else if(isSet(r,i)) ans += pre;
	        pre *= 2;
	        i++;
	    }
	    cout<<ans<<endl;
	}

}
