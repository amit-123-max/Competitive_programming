#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<pair<pair<int,int>,int>> v;
	    for(int i = 0;i<n;i++){
	        int a,b,c;
	        cin>>a>>b>>c;
	        v.push_back({{a,b},c});
	    }
	    set<int> s;
	    s.insert(k);
	    sort(v.begin(),v.end());
	    for(auto i : v){
	        auto r = i.first;
	        int start = r.first;
	        int end = r.second;
	        auto it = s.lower_bound(start);
            if(it != s.end()){
                int value = *it;
                if(value<=end) s.insert(i.second);
                else continue;
            }
            else continue;
	    }
	    cout<<*s.rbegin()<<endl;
	}

}
