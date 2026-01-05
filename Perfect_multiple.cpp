#include <bits/stdc++.h>
using namespace std;
#define int long long

bool poss(map<int,pair<bool,int>>& m,int k,int mk){
    int j = 2;
    while(k*j<=mk){
        if(!m.count(k*j)) return false;
        m[k*j].first = true;
        j++;
    }
    return true;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int k;cin>>k;
	    map<int,pair<bool,int>> m;
	    for(int i = 0;i<n;i++){
	        int a;cin>>a;
	        m[a] = make_pair(false,i+1);
	    }
	    bool final = true;
	    vector<int> ans;
	    for(auto &it : m){
	        auto itt = it.second.first;
	        bool fans = true;
	        if(!itt){
	            ans.push_back(it.first);
	            fans = poss(m,it.first,k);
	        }
	        if(!fans) {final=false;break;}
	    }
	    if(!final) cout<<-1<<endl;
	    else{
	        cout<<ans.size()<<endl;
	        for(int i : ans) cout<<i<<" ";
	        cout<<endl;
	    }
	}

}
