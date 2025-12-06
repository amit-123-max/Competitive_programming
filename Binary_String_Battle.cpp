#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int zero = 0;
	    for(int i = 0;i<n;i++) if(s[i]=='0') zero++;
	    if(n-zero<=k || k>n/2) cout<<"Alice"<<endl;
	    else cout<<"Bob"<<endl;
	}

}
