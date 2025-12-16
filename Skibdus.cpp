#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<int>& v,int n){
    bool ans = true;
    for(int i = 1;i<n;i++){
        if(v[i]<v[i-1]) {ans=false;break;}
    }
    return ans;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> v(n);
	    vector<int> vb(m);
	    for(int i = 0;i<n;i++) cin>>v[i];
	    for(int i = 0;i<m;i++) cin>>vb[i];
	    if(check(v,n)) {cout<<"YES"<<endl;continue;}
	    sort(vb.begin(),vb.end());
	    v[0] = min(v[0],vb[0]-v[0]);
	    bool poss = true;
	    for(int i = 1;i<n;i++){
	        auto it = lower_bound(vb.begin(),vb.end(),v[i-1]+v[i]);
	        if(it==vb.end()){
	            if(v[i-1]>v[i]) {poss=false;break;}
	            else continue;
	            }
	       // else if(it==vb.end() && i==n-1 && v[i-1]>v[i]) {poss=false;break;}
	       // else if(it==vb.end() && i==n-1 && v[i-1]<=v[i]) continue;
	        if(v[i]>=v[i-1]) v[i] = min(v[i],*it - v[i]);
	        else v[i] = *it - v[i];
	    }
	   // for(int i : v) cout<<i<<" ";
	   // cout<<endl;
	    if(poss) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
