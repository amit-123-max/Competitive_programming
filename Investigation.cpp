#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int n,m;
	cin>>n>>m;
	int mod = 1e9 + 7;
	vector<vector<pair<int,int>>> adj(n+1);
	for(int i = 0;i<m;i++){
	    int x,y,c;cin>>x>>y>>c;
	    adj[x].push_back({y,c});
	}
	vector<int> dist(n+1,LLONG_MAX);
	vector<int> w(n+1,0);
	vector<int> mf(n+1,LLONG_MAX);
	vector<int> maf(n+1,LLONG_MIN);
	
	using p = tuple<int,int>;
	priority_queue<p,vector<p>,greater<p>> q;
	q.push({0,1});
	dist[1] = 0;
	w[1] = 1;
	mf[1] = 0;
	maf[1] = 0;
	
	while(!q.empty()){
	    auto [cost,node] = q.top();
	    q.pop();
	    if(cost>dist[node]) continue;
	    
	    for(auto &[b,c] : adj[node]){
	        
	        if(cost+c<dist[b]){
	            mf[b] = mf[node]+1;
	            maf[b] = maf[node]+1;
	            q.push({cost+c,b});
	            dist[b] = cost + c;
	            w[b] = w[node];
	        }
	        else if(cost+c==dist[b]){
	            w[b] = (w[b]+w[node])%mod;
	            if(mf[node]+1<mf[b]) mf[b] = mf[node]+1;
	            if(maf[node]+1>maf[b]) maf[b] = maf[node]+1;
	        }
	    }
	}
	cout<<dist[n]<<" "<<w[n]<<" "<<mf[n]<<" "<<maf[n]<<endl;
}
