#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int n,m;cin>>n>>m;
	vector<vector<int>> adj;
	for(int i = 0;i<m;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    vector<int> v = {a,b,c};
	    adj.push_back(v);
	}
	vector<int> dist(n+1,0);
	dist[1] = 0;
	vector<int> toDfs;
	vector<int> parent(n+1,-1);
	bool isCycle = false;
	
	for(int i = 0;i<n;i++){
	    
	    for(auto vv : adj){
	        int u = vv[0];
	        int v = vv[1];
	        int w = vv[2];
	        
	        if(dist[u]+w<dist[v]){
	            if(i==n-1){
	                isCycle = true;
	                toDfs.push_back(v);
	            }
	            parent[v] = u;
	            dist[v] = dist[u] + w;
	        }
	    }
	    
	}
	if(!isCycle) cout<<"NO"<<endl;
	else{
	   // cout<<"YES"<<endl;
	   // vector<int> ans;
	   // int node = toDfs[0];
	   // while(1){
	   //     if(ans.size()!=0 && ans[0]==node) {ans.push_back(node);break;}
	   //     else ans.push_back(node);
	   //     node = parent[node];
	   // }
	   // for(int i : ans) cout<<i<<" ";
	   // cout<<endl;
	   cout << "YES" << endl;

        int x = toDfs[0];
        
        for(int i = 0; i < n; i++)
            x = parent[x];
        
        vector<int> ans;
        int cur = x;
        do {
            ans.push_back(cur);
            cur = parent[cur];
        } while(cur != x);
        
        ans.push_back(x);
        reverse(ans.begin(), ans.end());
        
        for(int v : ans) cout << v << " ";
        cout << endl;
	}
	}
