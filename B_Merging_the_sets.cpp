#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int sum = 0;
	    map<int,vector<int>> mm;
	    for(int i = 0;i<n;i++){
	        int l;cin>>l;
	        for(int j = 0;j<l;j++){
	            int a;cin>>a;
	            mm[a].push_back(i);
	        }
	    }
	    int count = 0;
	    set<int> s;
	    for(auto it = mm.begin();it!=mm.end();it++){
	        auto k = it->second;
	        if(k.size()==1) s.insert(k[0]);
	    }
	    if(mm.size()!=m || n-s.size()<2) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
}
