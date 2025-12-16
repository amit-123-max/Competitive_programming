#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;cin>>s;
	    int p = 0;int ss = 0;
	    for(int i = 0;i<n;i++){
	        if(s[i]=='p') p++;
	        else if(s[i]=='s') ss++;
	    }
	    if(p>1 && ss>1) cout<<"NO"<<endl;
	    else if(p==0 || ss==0) cout<<"YES"<<endl;
	    else{
	        if(p==1 && s[n-1]=='p') cout<<"YES"<<endl;
	        else if(ss==1 && s[0]=='s') cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
}
