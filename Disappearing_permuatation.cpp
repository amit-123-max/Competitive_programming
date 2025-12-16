#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n];
	    int d[n];
	    int ans[n];
	    for(int i = 0;i<n;i++) cin>>p[i];
	    for(int i = 0;i<n;i++) cin>>d[i];
	    vector<bool> v(n,false);
	    int mx = 0;
	    
	    for(int i = 0;i<n;i++){
	        int a = d[i]-1;
	        int c = 0;
	        int k = a;
	        if(d[i]==p[a]) c++;
	        else{
	        while(p[k]!=k+1 && !v[k]){
	            c++;v[k]=true;k=p[k]-1;
	        }
	        }
	        if(c!=0) mx+=c; 
	        ans[i] = mx;
	    }
	    for(int i : ans) cout<<i<<" ";
	    cout<<endl;
	}

}