#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>> adj(n+1);
	for(int i = 0;i<m;i++){
	    int x,y;
	    cin>>x>>y;
	    adj[x].push_back(y);
	    adj[y].push_back(x);
	}
    vector<int> parent(n+1);
    queue<int> q;
    vector<int> visited(n+1,false);
    q.push(1);
    parent[1] = 1;
    visited[1] = true;
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i : adj[node]){
            if(!visited[i]){
                visited[i] = true;
                parent[i] = node;
                q.push(i);
            }
        }
    }
    
    if(!visited[n]) cout<<"IMPOSSIBLE"<<endl;
    else{
        int comp = n;
        vector<int> v;
        while(parent[comp]!=comp){
            v.push_back(comp);
            comp = parent[comp];
        }
        v.push_back(1);
        reverse(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(int i : v) cout<<i<<" ";
        cout<<endl;
    }
}
