#include <bits/stdc++.h>
using namespace std;
#define int long long

bool dfs(vector<vector<int>>& adj,vector<int>& toDfs,int n){
    queue<int> q;
    vector<bool> visited(n+1,false);
    for(int i : toDfs) {q.push(i);visited[i] = true;}
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i : adj[node]){
            if(!visited[i]) {q.push(i);visited[i]=true;}
        }
    }
    
    return visited[n];
}

int32_t main() {
	int n,m;cin>>n>>m;
	vector<vector<int>> adj;
	vector<vector<int>> adj1(n+1);
	for(int i = 0;i<m;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    vector<int> v = {a,b,c};
	    adj.push_back(v);
	    adj1[a].push_back(b);
	}
	vector<int> dist(n+1,LLONG_MIN);
	dist[1] = 0;
	vector<int> toDfs;
	
	bool cycle = false;
	for(int i = 0;i<n;i++){
	    
	    for(auto vv : adj){
	        int u = vv[0];
	        int v = vv[1];
	        int w = vv[2];
	        
	        if(dist[u]!=LLONG_MIN && dist[u]+w>dist[v]){
	            if(i==n-1) toDfs.push_back(v);
	            dist[v] = dist[u] + w;
	        }
	    }
	    
	}
	if(dfs(adj1,toDfs,n)) cout<<-1<<endl;
	else cout<<dist[n]<<endl;
	}
