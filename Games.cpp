#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    unordered_map<int,int> ma;
	    for(int i = 0;i<n;i++){
	        int a;cin>>a;
	        ma[a]++;
	    }
	    unordered_map<int,int> maa;
	    int ub = 0;
	    for(int i = 0;i<m;i++){
	        int a;cin>>a;
	        if(ma[a]==0) ub++;
	        maa[a]++;
	    }
	    int ua = 0;
	    for(auto it = ma.begin();it!=ma.end();it++){
	        if(maa[it->first]==0) ua++;
	    }
	    if(ub>=ua) cout<<2*ua +1<<endl;
	    else if(ub<ua) cout<<2*ub + 2<<endl;
	}

}
