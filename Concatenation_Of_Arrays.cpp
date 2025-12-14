#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>> v;
	    for(int i = 0;i<n;i++){
	        int a,b;cin>>a>>b;
	        v.push_back({a,b});
	    }
	    sort(v.begin(), v.end(),
            [](const pair<int,int>& a, const pair<int,int>& b) {
                int x = max(a.first, a.second);
                int y = max(b.first, b.second);
                if(x!=y) return max(a.first, a.second) < max(b.first, b.second);
                else return min(a.first, a.second) < min(b.first, b.second);
             });
        for(int i = 0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<" ";
        }
        cout<<endl;
	}

}
