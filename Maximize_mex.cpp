#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    map<int,int> m;
	    for(int i = 0;i<n;i++){
	        int a;cin>>a;
	        m[a]++;
	    }
	    int ans;
	    for(int i = 0;i<=n;i++){
	        if(m[i]==0) {ans = i;break;}
	        m[i+x] += m[i] - 1;
	    }
	    cout<<ans<<endl;
	}
}
